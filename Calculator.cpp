#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

float x;
float y;
char choice;

int main() {

	for (;;) {

		std::cout << "Podaj 1 liczbe: ";
		std::cin >> x;
		std::cout << "Podaj 2 liczbe: ";
		std::cin >> y;

		std::cout << std::endl;

		std::cout << " MENU GLOWNE" << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << "1. Dodawanie" << std::endl;
		std::cout << "2. Odejmowanie" << std::endl;
		std::cout << "3. Mnozenie" << std::endl;
		std::cout << "4. Dzielenie" << std::endl;
		std::cout << "5. Zakoncz program" << std::endl;


		std::cout << std::endl;
		choice = _getch();

		switch (choice) {
			case '1': {
				std::cout << "Suma = " << x + y;
				break;
			}
			case '2': {
				std::cout << "Roznica = " << x - y;
				break;
			}
			case '3': {
				std::cout << "Iloczyn = " << x * y;
				break;
			}
			case '4': {
				if (x == 0 || y == 0) {
					std::cout << "Nie dzielimy przez zero!";
				}
				else {
					std::cout << "Iloraz = " << x / y;
				}
				break;
			}
			case '5': {
				exit(0);
			}
			default: {
				std::cout << "Nie ma takiej opcji w menu!";
			}
		}
		getchar();
		getchar();
		system("cls");
	}
	return 0;
}