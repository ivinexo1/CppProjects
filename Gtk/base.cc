#include <gtkmm.h>
#include <iostream>
#include <sstream>
#include <fstream>

class MyWindow : public Gtk::Window
{
public:
  Gtk::ToggleButton m_Button;
  MyWindow();
  void on_button_clicked();
};

MyWindow::MyWindow()
{
  Gtk::Fixed fixed;
  auto label = Gtk::make_managed<Gtk::Label>("cool button");
 /* Set some window properties */
  set_title("Frame Example");
  set_size_request(300, 300);
  fixed.put(m_Button, 140, 140);
  m_Button.set_size_request(20, 20);
  m_Button.signal_clicked().connect( sigc::mem_fun(*this, &MyWindow::on_button_clicked) );
  /* Sets the margin around the frame. */
  m_Button.set_child(*label); 
  set_child(fixed);
}

void MyWindow::on_button_clicked()
{
    std::string file;
     // Read from the text file
    std::ifstream MyReadFile("hello");
    std::stringstream buffer;
    buffer << MyReadFile.rdbuf();
    MyReadFile.close(); 
    file = buffer.str();
    if(m_Button.get_active()){
        std::size_t pos = file.find("false");
        if (pos != std::string::npos){
            file.replace(pos, 5, "true");
        }
    }else{
        std::size_t pos = file.find("true");
        if (pos != std::string::npos){
            file.replace(pos, 4, "false");
        }
    }
    std::ofstream Write("hello");
    Write << file;
    Write.close();
    std::cout << file;
}

int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.examples.base");

  return app->make_window_and_run<MyWindow>(argc, argv);
}
