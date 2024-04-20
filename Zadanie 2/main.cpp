#include "fib.h"
#include <iostream>


int main() {
	std::cout << "Wynik fibonacciRecurencja: " << fibonacciRecurencja(6) << std::endl;
	std::cout << "Wynik fibonacciIteracja: " << fibonacciIteracja(6) << std::endl;
	return 0;
}
