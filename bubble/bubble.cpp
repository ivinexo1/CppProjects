#include <iostream>


int main() {
    int arr[] = { 432, 342, 34, 234, 3, 213, 367, 847, 763 };
    int i, j, fsw, ssw;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << n << std::endl;    
    for( j = 0; n > j; j++) {
        for(i = 0; n > i; i++) {
            if (arr[i] > arr[i + 1]) {
                fsw = arr[i];
                ssw = arr[i + 1];
                arr[i] = ssw;
                arr[i + 1] = fsw; 
            }
        }
    }

    for(i = 0; n > i; i++) {
        std::cout << arr[i] << " ";
    }
 
    std::cout << std::endl;

    return 0;
}
