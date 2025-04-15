#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int a, b, c, totalPrize, bigNumber=0;
	cin >> a >> b >> c;
	if (a == b && b == c && c == a) {
		totalPrize = 10000 + (a * 1000);
	}
	else if (a == b) {
		totalPrize = 1000 + (a * 100);
	}
	else if (c == b) {
		totalPrize = 1000 + (b * 100);
	}
	else if (a == c) {
		totalPrize = 1000 + (a * 100);
	}
	else if (a != b && b != c && c != a) {
		if (a > bigNumber) {
			bigNumber = a;
		}
		if (b > bigNumber) {
			bigNumber = b;
		}
		if (c > bigNumber) {
			bigNumber = c;
		}
		totalPrize = bigNumber * 100;
	}
	cout << totalPrize;
}