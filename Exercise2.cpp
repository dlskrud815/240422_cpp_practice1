#include <iostream>

int main() 
{
	int age;

	while (1) {
		std::cout << "���̸� �Է��ϼ���.\n";
		std::cin >> age;

		if (age >= 1 && age <= 7) {
			std::cout << "����\n";
		}
		else if (age >= 8 && age <= 13) {
			std::cout << "�ʵ��л�\n";
		}
		else if (age >= 14 && age <= 16) {
			std::cout << "���л�\n";
		}
		else if (age >= 17 && age <= 19) {
			std::cout << "����л�\n";
		}
		else if (age >= 20 && age < 200) {
			std::cout << "����\n";
		}
		else if (age >= 200) {
			std::cout << "���̰� �ʹ� �����ϴ�..!\n";
		}
		else if (age == -1) {
			return 0;
		}
	}
}