#include <iostream>

int main2() {
	int arrs[]{ 1, 2, 3 };
	int sizes = sizeof(arrs) / sizeof(arrs[0]);
	std::cout << sizes; // 3
}//размер массива