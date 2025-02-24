#include <iostream>
#include "/home/ivinexo/CppProjects/math/math.cpp"

int main() {
    math math;
    double y = 20;
    double x;
    
    std::cout << "   ";
    for(x = -20; x <= 20; x++) {
        if(x < 0) {
            if(x > -10) {
                std::cout << x << " ";
            } else {
                std::cout << x;
            }
        } else {
            if(x < 10) { 
                std::cout << " " << x << " ";
            } else {
                std::cout << " " << x;
            }
        }
    }
    std::cout << "\n";

    for( ; y >= -20; y--){
        if(y < 0) {
            if(y > -10) {
                std::cout << y << " ";
            } else {
                std::cout << y;
            }
        } else {
            if(y < 10) { 
                std::cout << " " << y << " ";
            } else {
                std::cout << " " << y;
            }
        }
//        std::cout << " " <<  y << " ";
        for ( x = -20; x <= 20; x++) {
            if( x + y == 5){
                std::cout << " # ";
//            } else if (math.intExp(2,x) == y){
//                std::cout << " & ";
            }else {
                std::cout << " . ";
            }
        }
        std::cout << std::endl;
    }
//    for (double i = -1; i <= 1; i = i + 0.1){
//        std::cout << i;
//    }
    std::cout << "\n" << math.doSqrt(2) << "\n" << math.doCube(16) << std::endl;
    return 0;
}
