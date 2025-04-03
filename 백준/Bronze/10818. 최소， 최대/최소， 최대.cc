#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>


using namespace std;

int main()
{
	int total, inputNumber, min, max;
	cin >> total;
	for (int i = 0;i < total;i++) {
		cin >> inputNumber;
		if (i == 0) {
			min = inputNumber;
			max = inputNumber;
		}
		else {
			if (inputNumber > max) {
				max = inputNumber;
			}
			if (inputNumber < min) {
				min = inputNumber;
			}
		}
	
	}
	cout << min << " " << max;
}