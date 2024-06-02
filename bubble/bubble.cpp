#include <iostream>
#include "/home/ivinexo/lib/c++/arr/arr.cpp"


    
int main() {
    array array;
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};   
    int i, j;
    int n = sizeof(arr) / sizeof(arr[0]);
    char * pEnd = &arr[sizeof(arr) / sizeof(arr[0])];
    
//    array.charInput(&arr[0], pEnd);
    std::cout << n << " " << &arr[n] - &arr[0] << std::endl;
//    array.numInput(&arr[0], pEnd);
//    std::cout << sizeof(arr) / sizeof(arr[0]) << " " << pEnd << std::endl;
//    array.numPrint(&arr[0], 
//    for(i = 0; i < n; i++) {
//        std::cout << arr[i] << " ";
//    }
//   std::cout << std::endl;
    array.charPrint(&arr[0], pEnd);
    std::cout << n << std::endl;
    for( j = 0; n > j; j++) {
        for(i = 0; n > i; i++) {
            if (arr[i] > arr[i + 1]) {
                array.charSwap(&arr[i], &arr[i + 1]);
            }
        }
    }

    array.charPrint(&arr[0], pEnd);
//    for(i = 0; n > i; i++) {
//        std::cout << arr[i] << " ";
//    }
 
//    std::cout << std::endl;

    return 0;
}
