#include <iostream>
#include <variant>
#include <vector>
#include <algorithm>


std::variant<int, std::string, std::vector<int>> get_variant() {
	std::srand(std::time(nullptr));
	int random_variable = std::rand() % 3;

	std::variant<int, std::string, std::vector<int>> result;
	switch (random_variable)
	{
	case 0:
		result = 5;
		break;
	case 1:
		result = "string";
		break;
	case 2:
		result = std::vector<int>{ 1, 2, 3, 4, 5 };
		break;
	default:
		break;
	}
	return result;
}


int main()
{
	std::variant<int, std::string, std::vector<int>> result = get_variant();
	if (std::holds_alternative<std::string>(result)) {
		std::cout << "This is a string! " << std::get<std::string>(result) << "\n";
	}
	else if (std::holds_alternative<int>(result)) {
		std::cout << "This is an integer! " << 2 * std::get<int>(result) << "\n";
	}
	else if (std::holds_alternative<std::vector<int>>(result)) {
		std::cout << "This is a vector!" << "\n";
		std::vector<int> vect = std::get<std::vector<int>>(result);
		std::for_each(vect.begin(), vect.end(), [](int i) {
			std::cout << i << "\n";
			});
	}
}