#include <iostream>
#include "../Array/arr.cpp"

int main() {
    array Array;
    int a;
    int b;
    int passpointer = 0;
    char string[a];
    char pass[b];
    
    std::cout << "lenght of massage: ";
    std::cin >> a;
    std::cout << std::endl << "Massage: ";
    Array.charInput(&string[0],&string[a]);
    std::cout << std::endl << "Lenght of password: ";
    std::cin >> b;
    std::cout << "Password: ";
    Array.charInput(&pass[0], &pass[b]);
    for(int i = 0; i < a; i++){
        if(passpointer >= b){
            passpointer = 0;
        //    std::cout << passpointer << std::flush;
        }
        string[i] = char(int(string[i]) + int(pass[passpointer]));
        passpointer++;
//        std::cout << passpointer << std::flush;      
    }
    passpointer = 0;
    Array.charPrint(&string[0], &string[a]);

    for(int i = 0; i < a; i++){
        if(passpointer >= b){
           passpointer = 0;
        }
        string[i] = char(int(string[i]) - int(pass[passpointer]));
        passpointer++;
    }
    Array.charPrint(&string[0], &string[a]);
    return 0;
}
