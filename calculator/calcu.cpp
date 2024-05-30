#include <iostream>

using namespace std;

int main() {
    char comm;
    int a, b, c;

    cout << "num 1, command, num 2 \n";
    cin >> a >> comm >> b;

    do {
        switch(comm) {
            case '+':
                c = a + b;
                break;
            case '-':
                c = a - b;
                break;
            case '*':
                c = a * b;
                break;
            case '/':
                c = a / b;
                break;
            case '^':
                for(int i = 0; i < b; i++) a = a * a;
                break;
        }

        cout << "\n" << c << endl;
        cin >> a >> comm >> b;

    }while (comm != 'e');

    cout << "exited" << endl;

    return 0;
}
