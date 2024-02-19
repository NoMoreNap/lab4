#include <iostream>
#include <stdlib.h>

using  namespace  std;

int Fibonacci(int n) {

    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        int num1 = Fibonacci(n - 1);
        int num2 = Fibonacci(n  - 2);
        try {
            int a = num1  + num2;
            if (a > 2e9 + 148e6 + 1) {
                throw L"Вышли за предел int32";
            }
            return a;
        } catch( const char* error_message ) {
            cout << error_message << endl;
            exit( 0);
        }
    }

}

int main() {
    setlocale(LC_ALL, "Russian");
    int step;
    wcout << L"Введите число\n";
    cin >> step;

    const bool is_in_range = step > 0;

    if (!is_in_range) {
        wcout << L"Неверное число";
        return 0;
    }
    if ( step >= 43 ) {
        wcout << L"Вышли за предел int32";
        return 0;

    }

    switch (step) {
        case 0:
            wcout << L"Неверное число";
            break;
        default:
            int b = Fibonacci(step);
            cout << b;
    }
}
