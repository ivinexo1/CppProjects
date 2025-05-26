#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    // Create a text string, which is used to output the text file
    std::string myText;

    // Read from the text file
    std::ifstream MyReadFile("hello");
    std::stringstream buffer;
    buffer << MyReadFile.rdbuf();
    MyReadFile.close(); 
    myText = buffer.str();

    std::size_t pos = myText.find("Hello");
    if (pos != std::string::npos)
        myText.replace(pos, 5, "Python");

    std::cout << myText;
    return 0;
}
