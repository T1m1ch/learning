#include <iostream>

int main1() {
	size_t size;
	std::cin >> size;

	int* arr = new int[size];
	for (int i = 0; i != size; i++) {
		arr[i] = i * 2;
		std::cout << arr[i];
	}

}//объявление динамического на указателях