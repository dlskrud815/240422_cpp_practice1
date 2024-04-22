#include <iostream>

int main() 
{
	int age;

	while (1) {
		std::cout << "\n나이를 입력하세요.\n";
		std::cin >> age;

		if (age == -1)
		{
			return 0;
		}
		else {
			if (age >= 1 && age <= 7)
			{
				std::cout << "유아\n";
			}
			else if (age <= 13)
			{
				std::cout << "초등학생\n";
			}
			else if (age <= 16)
			{
				std::cout << "중학생\n";
			}
			else if (age <= 19)
			{
				std::cout << "고등학생\n";
			}
			else if (age < 200)
			{
				std::cout << "성인\n";
			}
			else if (age >= 200)
			{
				std::cout << "나이가 너무 많습니다..!\n";
			}
		}
	}
}