#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string>

using namespace std;

int main()
{
	int alphabet[26] = { 0 };
	string s;
	cin >> s;
	for (char i = 'a';i <= 'z';i++) {
		cout << (int)s.find(i) << ' ';
	}
	return 0;
}