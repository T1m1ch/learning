#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main1() {
	setlocale(LC_ALL, "RU");
	int a = 10;
	int b = 2 * --a; //18
	a = 10;
	b = 2 * a--; //20
	return 0;
}