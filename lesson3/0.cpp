#include <iostream>

int main() {
	float value = 8.5;
	float* pointer = &value;
	std::cout << value << "\n" << &value << "\n" << pointer << "\n" << *pointer << "\n" << &pointer;
	//�������� ����������, ����� ����������, �������, �������� ���������, ����� ���������
}