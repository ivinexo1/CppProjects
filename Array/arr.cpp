#include <iostream>
#include <iomanip>

class array {
public:
//    void charInput

    int numInput(int * beg, int * end){
        g = beg;
        std::cin >> std::setw(end - beg); 
        for( ;g < end; g++){
            std::cin >> *g;
        }

        return 0;
    } 
    void charPrint(char * beg, char * end){
        for(char * i = beg; i < end; i++) {
            std::cout << *i << " ";
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

private:
    char char1, char2;
    /*unsigned char*/ int val1, val2;
    int * n, *g;
    int * i;
};
