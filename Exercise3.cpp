#include <iostream>

int main() {
	std::string name;

	while (1) {
		std::cout << "�̸��� �Է��ϼ���.\n";
		std::cin >> name;

		if (name == "-1") 
		{
			return 0;
		}
		else 
		{
			if (name == "ȫ�浿")
			{
				std::cout << "����\n";
			}
			else if (name == "������")
			{
				std::cout << "����\n";
			}
			else
			{
				std::cout << "�𸣰ھ��.\n";
			}
		}
	}
}