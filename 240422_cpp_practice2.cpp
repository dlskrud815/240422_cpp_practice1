#include <iostream>

int main() {

	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	bool result = (num1 > num2) && (num1 > num3);

	bool condition = false;

	if (num1 > num2) {
		std::cout << "num1 > num2";
	}
	else if (num1 > num3) {
		std::cout << "" << "";
	}
	else { 
		std::cout << "";
	}
	return 0;
}