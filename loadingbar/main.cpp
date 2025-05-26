#include <iostream>
#include <unistd.h>

int main(){
    for(int i = 0; i < 100; i++){
        std::cout << "\r" << "[";
        for(int j = 0; j < 100; j++){
            if(j <= i){
                std::cout << "#";
            }else{
                std::cout << "-";
            }
        }
        std::cout << "]" << std::flush; 
        usleep(10000);
    }
}
