#include <iostream>
#include <string>

bool IsDubplacate(char c1, char c2)
{                                                                      
	if (c1 == c2 || int(c1) == int(c2) - 32 || int(c1) - 32 == int(c2))//&&((int(c1) >= 65&& int(c1) <= 90 && int(c2)>=97&&int(c2)<=122) || (int(c2) >= 65 && int(c2) <= 90 && int(c1) >= 97 && int(c1) <= 122)))
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	std::string InputString;
	std::getline(std::cin, InputString);
	const size_t LENGTH = InputString.size();
	
	std::string OutputString;

	OutputString.resize(LENGTH);

	for (size_t i = 0; i < LENGTH; ++i)
	{
		OutputString.at(i) = '(';
		for (size_t j = 0; j < LENGTH; ++j)
		{
			if (IsDubplacate(InputString[i], InputString[j]) && i!=j)
			{
				OutputString.at(i)=')';
				break;
			}
		}
	}
	std::cout << OutputString;
	return 0;
}