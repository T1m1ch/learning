#include <iostream>
#include <vector>
#include <array>

int main3() {
	std::array<int, 3> arr = { 1, 2, 3 };
	for (int i = 0; i != arr.size(); i++) {
		arr[i] = i;
		std::cout << arr[i];
	}

	std::vector<int> vec;
	int size;
	std::cin >> size;
	vec.resize(size);


	for (int i = 0; i != vec.size(); i++) {
		vec[i] = i;
		std::cout << vec[i];
	}

}//stl массивы и динамические массивы (векторы)