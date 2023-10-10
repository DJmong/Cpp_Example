#include <iostream>
#include <ctime>

int main()
{
	time_t t = std::time(nullptr);
	struct tm tm;
	errno_t err = localtime_s(&tm, &t);
	if (err != 0)
	{
		char buf[1024];
		std::cout << strerror_s(buf, 1024, err);
		return -1;
	}
	constexpr int MAX= 256;
	char buf[MAX];
	size_t cnt = strftime(buf, MAX, "%Y-%m-%d %H:%M:%S", &tm);
	if (cnt <= 0)
	{
		std::cout << "Failed to Formatting Localtime";
		return -1;
	}
	std::cout << buf;
	return 0;
}