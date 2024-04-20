#include "fib.h"
#include <iostream>
int fibonacciRecurencja(unsigned int n) {
    if (n <= 1)
        return n;
    else
        return fibonacciRecurencja(n - 1) + fibonacciRecurencja(n - 2);
}

int fibonacciIteracja(unsigned int n) {
    if (n <= 1) {
        return n;
    }
    int fib = 1;
    int poprzedniFib = 0;
    
    for(unsigned int i = 2; i <= n; ++i) {
        int temp = fib;
        fib += poprzedniFib;
        poprzedniFib = temp;
    }
    return fib;
}

int main() {
	std::cout << "Wynik fibonacciRecurencja: " << fibonacciRecurencja(6) << std::endl;
	std::cout << "Wynik fibonacciIteracja: " << fibonacciIteracja(6) << std::endl;
	return 0;
}
