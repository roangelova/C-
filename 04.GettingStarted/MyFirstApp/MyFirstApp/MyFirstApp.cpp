#include <iostream>

int main()
{
	int favorite_number;

	std::cout << "Please enter your favorite number:";

	std::cin >> favorite_number;

	std::cout << "That's my favorite number too!" << std::endl;
	std::cout << "No, really! " << favorite_number << " is myfavoritenumber!" << std::endl;

	return 0;
}