#include <iostream>
#include <cmath>
#include "/home/ivinexo/CppProjects/math/math.cpp"

int main() {
    math math;
    double y;
    double x;
    
    int count;
    double x2;
    double zoom;
    int shifts;
    int shiftu;
    std::cin >> shifts >> shiftu >> zoom;
    
    std::cout << "   ";
    
    for(x = (-26 + shifts) * zoom; x <= (26 + shifts)  * zoom; x++) {
        if(x <= 0) {
            if ( x < -10) {
                std::cout << x;
            } else {
                std::cout << x << " ";
            }
        } else {
            if (x >= 10) {
                std::cout << x << " ";
            } else {
                std::cout << " " << x << " ";
            }
        }
    }
    std::cout << "\n";

    for(y = (26 + shiftu) * zoom ; y >= (-26 + shiftu) * zoom; y = y - zoom){
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
        for(x = (-26 + shifts) * zoom; x <= (26 + shifts) * zoom; x = x + zoom) {
            if(math.doSqrt(x, 1000000) == y){
                std::cout << " # ";
//            } else if (math.intExp(2,x) == y){
//                std::cout << " & ";
            }else {
                std::cout << " . ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
