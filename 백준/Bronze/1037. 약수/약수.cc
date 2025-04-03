#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string>

using namespace std;

int main()
{
	int number,inputNumber, max, min;
	cin >> number;
	for (int i = 0;i < number;i++) {
		cin >> inputNumber;
		if (i == 0) {
			min = inputNumber;
			max = inputNumber;
		}
		if (inputNumber > max) {
			max = inputNumber;
		}
		if (inputNumber < min) {
			min = inputNumber;
		}

	}
	cout << max * min;
}