#include <iostream>

using  namespace  std;

long int Fibonacci(int n) {


    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        int a = Fibonacci(n - 1) + Fibonacci(n  - 2);
        return a;
    }

}


int main() {
    setlocale(LC_ALL, "Russian");

    int b = Fibonacci(4);

    cout << b;

}
