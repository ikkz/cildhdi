#include <iostream>
#include <string>
#include <bitset>
int main()
{
	std::string s = "yanglei";
	for (auto c : s)
	{
		std::cout << c << ":\n" << std::bitset<8>(c).to_string() << std::endl;
	}
	int pi = 3.14;
	std::cin.get();
	return 0;
}
