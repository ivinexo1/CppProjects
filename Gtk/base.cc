#include <gtkmm.h>
#include <iostream>
#include <sstream>
#include <fstream>

class MyWindow : public Gtk::Window
{
public:
  Gtk::ToggleButton m_Button;
  MyWindow();
  void on_button_clicked(std::string, std::string, std::string);
  bool if_in_file(std::string, std::string);
};

MyWindow::MyWindow()
{
  Gtk::Fixed fixed;
  set_title("Frame Example");
  set_size_request(300, 300);

  fixed.put(m_Button, 140, 140);
  m_Button.set_size_request(20, 20);
  if(if_in_file("hello", "true")) {
        m_Button.set_active();
  }
  m_Button.signal_clicked().connect( sigc::bind( sigc::mem_fun(*this, &MyWindow::on_button_clicked), "hello", "true", "false"));

  set_child(fixed);
}

bool MyWindow::if_in_file(std::string fname, std::string string){
    std::string file;

    // Read from the text file
    std::ifstream MyReadFile(fname);
    std::stringstream buffer;
    buffer << MyReadFile.rdbuf();
    MyReadFile.close(); 
    file = buffer.str();
    std::size_t pos = file.find(string);
    if (pos != std::string::npos){
        return true;
    }
    return false;
}

void MyWindow::on_button_clicked(std::string fname, std::string string, std::string replace)
{
    std::string file;
     // Read from the text file
    std::ifstream MyReadFile(fname);
    std::stringstream buffer;
    buffer << MyReadFile.rdbuf();
    MyReadFile.close(); 
    file = buffer.str();
    if(m_Button.get_active()){
        std::size_t pos = file.find(replace);
        if (pos != std::string::npos){
            file.replace(pos, 5, string);
        }
    }else{
        std::size_t pos = file.find(string);
        if (pos != std::string::npos){
            file.replace(pos, 4, replace);
        }
    }
    std::ofstream Write("hello");
    Write << file;
    Write.close();
    std::cout << file;
    return;
}

int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.examples.base");

  return app->make_window_and_run<MyWindow>(argc, argv);
}
