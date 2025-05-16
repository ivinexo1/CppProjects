#include <iostream>
#include <iomanip>

class array {
public:
//    void charInput

    int numInput(int * beg, int * end){
//        std::cin >> std::setw(end - beg); 
        for(int* g = beg ;g < end; g++){
            std::cin >> *g;
        }

        return 0;
    }
    void charInput(char* beg, char* end){
//        std::cin >> std::setw(end - beg);
        for (char* i = beg; i < end; i++){
            std::cin >> *i;
        }
        return;
    }
    void charPrint(char * beg, char * end){
        for(char * i = beg; i < end; i++) {
            std::cout << *i;
        }
        std::cout << std::endl;

        return;
    }
    void numPrint(int * beg, int * end) {
        for(i = beg; i < end; i++) {
            std::cout << *i << " ";
        }
        std::cout << std::endl;

        return;
    }

    void numSwap(int * a, int * b) {
        val1 = *a;
        val2 = *b;

        *a = val2;
        *b = val1;

        return;
    }

    void charSwap(char * a, char * b) {
        char1 = *a;
        char2 = *b;

        *a = char2;
        *b = char1;
        
        return;
    }
    void charEncrypt(char* beg, char* end, char* beg2, char* end2){
        char* passpoint = beg2;
        for(char* i = beg; i < end; i++){
            if(passpoint >= end2){
                passpoint = beg2;
            }
            *i = char(int(*i) + int(*passpoint));
            passpoint++;
        }
        return;
    }
    void intDecrypt(int* beg, int* end, char* beg2, char* end2){
        char* passpoint = beg2;
        for(int* i = beg; i < end; i++){
            if(passpoint >= end2){
                passpoint = beg2;
            }
            *i = *i - int(*passpoint);
            passpoint++;
        }
        return;
    }
    void intToChar(int* ibeg, int* iend, char* cbeg, char* cend){
        char* ci = cbeg;
//        std::cout << iend - ibeg << " " << cend - cbeg;
        for(int* i = ibeg; i < iend; i++){
            *ci = char(*i);
            ci++;
        }
        return;
    }

private:
    char char1, char2;
    /*unsigned char*/ int val1, val2;
    int * n, *g;
    int * i;
};
