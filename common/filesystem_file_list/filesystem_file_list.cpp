#include <filesystem>
#include <string>
#include <iostream>

int directory_check()
{
	namespace fs = std::filesystem;
	std::string path = "C:\\test";
	for (const auto& entry : fs::directory_iterator(path))
	{
		std::cout << entry.path() << std::endl;
	}
	return 0;
}