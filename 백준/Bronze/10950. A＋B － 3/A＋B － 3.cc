#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int a, b, c,d;
	cin >> d;
	a = d * 2;
	vector<int> v;
	for (int i = 0;i < a;i++) {
		cin >> b;
		v.insert(v.begin() + i, b);
	}
	for (int i = 0;i+1 < v.size();i += 2) {
		c = v.at(i) + v.at(i + 1);
		cout << c << "\n";
	}
}