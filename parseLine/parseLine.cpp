#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


std::vector<std::string> parseLine(std::string input, std::string del)
{
	std::vector<std::string> result;
	std::string parse = "";
	for(size_t idx = 0; idx < input.size(); ++idx)
	{
		if(find(del.begin(), del.end(), input[idx]) == del.end())
		{
			parse += input[idx];
		}
		else if(!parse.empty())
		{
			result.push_back(parse);
			parse = "";
		}
		if(idx+1 == input.size() && !parse.empty())
		{
			result.push_back(parse);	
		}
	}
	return result;
}

int main()
{
	std::string input = "this,is!parse$test";
	std::vector<std::string> result = parseLine(input, ",!$");
	for(size_t idx = 0; idx < result.size(); ++idx)
	{
		std::cout << result[idx] << std::endl;
	}
	return 1;
}