#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> values{ 4, 7, 9, 14, 12 };
	std::for_each(values.begin(), values.end(), [](int i) {
		std::cout << i << " ";
		});
	std::cout << "\n";

	int index = 0;
	auto v = values.begin();
	std::for_each(values.begin(), values.end(), [&index, v](int &i) {
		if (index % 2 != 0) {
			i = i * 3;
		}
		index++;		
	});
	std::for_each(values.begin(), values.end(), [](int i) {
		std::cout << i << " ";
		});
	std::cout << "\n";

}