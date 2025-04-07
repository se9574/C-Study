#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string>

using namespace std;

int main()
{
	int inputNumber;
	cin >> inputNumber;
	for (int i = 1; i <= 9; i++) {
		cout << inputNumber << " * " << i << " = " << inputNumber * i << "\n";

	}
}