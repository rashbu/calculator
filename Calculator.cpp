#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

float x;
float y;
char choice;

int main() {

	for (;;) {

		std::cout << "Enter first number: ";
		std::cin >> x;
		std::cout << "Enter second number: ";
		std::cin >> y;

		std::cout << std::endl;

		std::cout << " MAIN MENU" << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << "1. Addition" << std::endl;
		std::cout << "2. Subtraction" << std::endl;
		std::cout << "3. Multiplication" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "5. Shut down" << std::endl;


		std::cout << std::endl;
		choice = _getch();

		switch (choice) {
			case '1': {
				std::cout << "Sum = " << x + y;
				break;
			}
			case '2': {
				std::cout << "Difference = " << x - y;
				break;
			}
			case '3': {
				std::cout << "Product = " << x * y;
				break;
			}
			case '4': {
				if (x == 0 || y == 0) {
					std::cout << "Division by zero is forbidden by all the laws of the universe!";
				}
				else {
					std::cout << "Quotient = " << x / y;
				}
				break;
			}
			case '5': {
				exit(0);
			}
			default: {
				std::cout << "Wrong key!";
			}
		}
		getchar();
		getchar();
		system("cls");
	}
	return 0;
}