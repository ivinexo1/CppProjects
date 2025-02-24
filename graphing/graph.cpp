#include <iostream>
#include "/home/ivinexo/CppProjects/math/math.cpp"

int main() {
    math math;
    double y = 20;
    double x;

    for( ; y >= -20; y--){
//        std::cout << " " <<  y << " ";
        for ( x = -20; x <= 20; x++) {
            if( math.intExp(2, x) == y){
                std::cout << " # ";
//            } else if (((3+x) * (x+2)) == y){
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

    return 0;
}
