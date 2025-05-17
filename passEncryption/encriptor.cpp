#include <iostream>
#include <fstream>
#include "../Array/arr.cpp"

int main() {
    array Array;
    int a, b, c;
    int passpointer = 0;

    std::cout << "File name lenght: ";
    std::cin >> c;
    char name[c+1];
    std::cout << "File name: ";
    Array.charInput(&name[0], &name[c]);
    name[c] = '\0';

    std::cout << "lenght of massage: ";
    std::cin >> a;
    char string[a];
//    std::cout << "Massage: ";
//    Array.charInput(&string[0],&string[a]);

    std::ifstream infile(name);

    // Reading the array elements from the file
    for (int i = 0; i < a; ++i) {
        infile >> string[i];
    }

    // Closing the file
    infile.close();    

    std::cout << "Lenght of password: ";
    std::cin >> b;
    char pass[b];
    std::cout << "Password: ";
    Array.charInput(&pass[0], &pass[b]);

    Array.charEncrypt(&string[0], &string[a], &pass[0], &pass[b]);
    int arr[a];
    for(int i = 0; i < a; i++){
        arr[i] = string[i];
    }

    Array.numPrint(&arr[0], &arr[a]);
    
    Array.charPrint(&name[0], &name[c]);
    std::ofstream outfile;
    outfile.open(name);
    if (!outfile.is_open()) {
        std::cerr << "Failed to open file for writing.\n";
        return 1;
    }

    // Writing the array elements to the file
    for (int i = 0; i < a; ++i) {
        outfile << arr[i] << " ";
    }

    // Closing the file
    outfile.close();

    return 0;
}
