
#include <iostream>
#include "minus.h"
#include "del.h"
#include "umn.h"
#include "plus.h"

int main()
{
    int a, b, input, result;

	printf("Vyberite deistvie?\n");
	printf("1. +\n");
	printf("2. -\n");
	printf("3. *\n");
	printf("4. /\n");
	printf("5. Vyhod\n");

	printf("Vash vybor: ");
	scanf("%d", &input);

	if (input != 5) {

		std::cout << "Vvedite pervoe chislo:";
		std::cin >> a;
		std::cout << "Vvedite vtoroe chislo:";
		std::cin >> b;

		switch (input) {
		case 1:
			result = plus(a, b);
			break;
		case 2:
			result = minus(a, b);
			break;
		case 3:
			result = umn(a, b);
			break;
		case 4:
			if (b != 0)
			{
				result = del(a, b);
			}
			else
			{
				std::cout << "Division by zero." << std::endl;
			}
			break;
		default:
			std::cout << "Nepravilnyi vvod." << std::endl;
		}

		std::cout << "Otvet:" << result << std::endl;

	}
}