#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int h, m,require_min;
	cin >> h >> m >> require_min;
	m += require_min;
	while (m >= 60) {
		if (m >= 60) {
			m -= 60;
			h += 1;
			if (h >= 24) {
				h -= 24;
			}
		}
		if (h >= 24) {
			h -= 24;
		}
	}
	cout << h << " " << m;

}