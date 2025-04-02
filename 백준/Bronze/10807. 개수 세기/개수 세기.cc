#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int total, target, inputNumber,value;
	cin >> total;
	vector<int> v(total);
	for (int i = 0; i < total; i++) {
		cin >> inputNumber;
		v.insert(v.begin() + i, inputNumber);
	}
	cin >> target;
	value = 0;
	for (int i = 0; i < total; i++) {
		if (v.at(i) == target) {
			value++;
		}
	}
	cout << value;
}   