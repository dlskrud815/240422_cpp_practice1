#include <iostream>

int main() 
{
	int age;

	while (1) {
		std::cout << "\n���̸� �Է��ϼ���.\n";
		std::cin >> age;

		if (age == -1)
		{
			return 0;
		}
		else {
			if (age >= 1 && age <= 7)
			{
				std::cout << "����\n";
			}
			else if (age <= 13)
			{
				std::cout << "�ʵ��л�\n";
			}
			else if (age <= 16)
			{
				std::cout << "���л�\n";
			}
			else if (age <= 19)
			{
				std::cout << "����л�\n";
			}
			else if (age < 200)
			{
				std::cout << "����\n";
			}
			else if (age >= 200)
			{
				std::cout << "���̰� �ʹ� �����ϴ�..!\n";
			}
		}
	}
}