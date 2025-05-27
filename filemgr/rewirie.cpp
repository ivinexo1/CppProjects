#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, const char* argv[]) {
    // Create a text string, which is used to output the text file
    std::string fname = argv[1];
    std::string file;
    std::string replace;
    std::string replacment;

    std::cout << "Enter string to replace: ";
    std::cin >> replace;
    std::cout << "Enter replacment: ";
    std::cin >> replacment;

    // Read from the text file
    std::ifstream MyReadFile(fname);
    std::stringstream buffer;
    buffer << MyReadFile.rdbuf();
    MyReadFile.close(); 
    file = buffer.str();

    std::size_t pos = file.find(replace);
    if (pos != std::string::npos){
        file.replace(pos, replace.length(), replacment);
    }

    std::ofstream Write(fname);
    Write << file;
    Write.close();
    return 0;
}
