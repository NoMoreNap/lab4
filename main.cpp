#include <iostream>

using  namespace  std;

int Fibonacci(int n) {

    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        int num1 = Fibonacci(n - 1);
        int num2 = Fibonacci(n  - 2);
        int a = num1  + num2;
        if (a > 2e9 + 148e6 + 1) {
            cout << a;
        }
        return a;
    }

}

int main() {
    setlocale(LC_ALL, "Russian");
    int step = 4;

    int b = Fibonacci(step);

    cout << b;

}
