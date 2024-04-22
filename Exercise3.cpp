#include <iostream>

int main() {
	std::string name;

	while (1) {
		std::cout << "이름을 입력하세요.\n";
		std::cin >> name;

		if (name == "-1") 
		{
			return 0;
		}
		else 
		{
			if (name == "홍길동")
			{
				std::cout << "남자\n";
			}
			else if (name == "성춘향")
			{
				std::cout << "여자\n";
			}
			else
			{
				std::cout << "모르겠어요.\n";
			}
		}
	}
}