#include <iostream>
#include "/home/ivinexo/lib/c++/arr/arr.cpp"


    
int main() {
    array array;
    int arr[] = {815, 53, 591, 771, 79, 329, 33, 295, 936, 374};   
    int i, j;
    int n = sizeof(arr) / sizeof(arr[0]);
    int * pEnd = &arr[sizeof(arr) / sizeof(arr[0])];

//    std::cout << sizeof(arr) / sizeof(arr[0]) << " " << pEnd << std::endl;
//    array.numPrint(&arr[0], 
//    for(i = 0; i < n; i++) {
//        std::cout << arr[i] << " ";
//    }
 //   std::cout << std::endl;
    array.numPrint(&arr[0], pEnd);
    std::cout << n << std::endl;    
    for( j = 0; n > j; j++) {
        for(i = 0; n > i; i++) {
            if (arr[i] > arr[i + 1]) {
                array.swap(&arr[i], &arr[i + 1]); 
            }
        }
    }

    array.numPrint(&arr[0], pEnd);
//    for(i = 0; n > i; i++) {
//        std::cout << arr[i] << " ";
//    }
 
//    std::cout << std::endl;

    return 0;
}
