#include <iostream>
#include <fstream>
#include "../Array/arr.cpp"

int main() {
    array Array;
    int a, b, c;


    
    std::cout << "lenght of name: ";
    std::cin >> c;
    char name[c+1];
    std::cout << "file: ";
    Array.charInput(&name[0],&name[c]);
    name[c] = '\0';
    std::cout << "Lenght of message: ";
    std::cin >> a;
    int string[a+1];
//    for(int i = 0; i < 997; i++){
//        std::cin >> string[i];
//    }
    std::cout << "Password lenght: ";
    std::cin >> b;
    std::cout << "Password: ";
    char pass[b];
    Array.charInput(&pass[0], &pass[b]);

    std::ifstream infile(name);

    // Reading the array elements from the file
    for (int i = 0; i < a; ++i) {
        infile >> string[i];
    }

    // Closing the file
    infile.close();

//    std::cin >> string[998];



//    Array.charPrint(&pass[0], &pass[b]);
    Array.intDecrypt(&string[0], &string[a], &pass[0], &pass[b]);
    char arr[a];
    Array.intToChar(&string[0], &string[a], &arr[0], &arr[a]);
//    for(int i = 0; i < a; i++){
//        arr[i] = char(string[i]);
//    }
    char outname[c+2];
    for(int i = 1; i <= (c+1); i++){
        outname[i] = name[i-1];
    }
    outname[0] = 'o';
    Array.charPrint(&arr[0], &arr[a]);
    std::ofstream outfile(outname);
    if (!outfile.is_open()) {
        std::cerr << "Failed to open file for writing.\n";
        return 1;
    }

    // Writing the array elements to the file
    for (int i = 0; i < a; ++i) {
        outfile << arr[i];
    }

    // Closing the file
    outfile.close();
    return 0;
}
