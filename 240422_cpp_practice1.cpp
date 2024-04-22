#include <iostream>

int main() {

	std::string test3 = "포스코";
	std::string test4 = test3;

	test3 = "코딩온";

	std::cout << "내가 할 말은 " << std::endl
		<< test3 + test4 << "\n" << " 입니다.";

	return 0;
}