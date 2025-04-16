#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int a, sum = 0;
	cin >> a;
	for (int i = 1;i <= a;i++) {
		sum += i;
	}
	cout << sum;
}