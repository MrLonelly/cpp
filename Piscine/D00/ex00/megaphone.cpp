#include <iostream>
#include <string>

using	namespace std;

int		main(int argc, char **argv)
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string str = argv[i];
			for (size_t j = 0; j < str.size(); j++)
				str.at(j) = std::toupper(str.at(j));
			std::cout << str;
		}
	}
	std::cout << std::endl;
	return (0);
}