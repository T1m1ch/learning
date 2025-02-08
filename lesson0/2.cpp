#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	char a = 47;
	cout << a << endl;
	return 0;
}