#include <iostream>
#include <sstream>

int main()
{
	std::string input = "abc,def,ghi";
	std::istringstream ss(input);
	std::string token;

	while (std::getline(ss, token, ',')) {
		std::cout << token << '\n';
	}
	return 0;
}