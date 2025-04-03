#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	int total, inputNumber;
	cin >> total;
	vector<int> v;
	for (int i = 0;i < total;i++) {
		cin >> inputNumber;
		v.insert(v.begin() + i, inputNumber);
	
	}
	sort(v.begin(), v.end());
	cout << v[0] << " " << v[total - 1];
}