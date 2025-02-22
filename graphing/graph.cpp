#include <iostream>

int main() {
    double y = 10;
    double x;

    for( ; y >= -10; y = y - 0.5){
//        std::cout << " " <<  y << " ";
        for ( x = -10; x <= 10; x = x + 0.5) {
            if( (0.5 * x) == y){
                std::cout << " # ";
            } else if ((3 * (x+2)) == y){
                std::cout << " # ";
            }else {
                std::cout << " . ";
            }
        }
        std::cout << std::endl;
    }
//    for (double i = -1; i <= 1; i = i + 0.1){
//        std::cout << i;
//    }

    return 0;
}
