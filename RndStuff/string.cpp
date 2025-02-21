#include "/home/ivinexo/lib/c++/arr/arr.cpp"

int main() {
    array array;
    char arr[] = {'h', 'e', 'l', 'l', 'o'};
    char* arrBeg = &arr[0];
    char* arrEnd = &arr[5];


    array.charPrint(arrBeg, arrEnd);


    return 0;
}
    
    

