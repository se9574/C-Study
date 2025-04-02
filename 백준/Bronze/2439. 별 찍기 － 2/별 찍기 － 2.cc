#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a;
	b = a - 1;
	c = b;
	d = 1;
	e = d;
	while (a != 0) {
		while (c != 0) {
			cout << " ";
			c -= 1;
		}
		while (d != 0) {
			cout << "*";
			d -= 1;
		}
		e += 1;
		d = e;
		b -= 1;
		c = b;
		a -= 1;
		cout << "\n";
	}
}   