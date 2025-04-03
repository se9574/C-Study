#include <iostream>


using namespace std;

int main()
{
	int a,b,c;
	cin >> a;
	b = a;
	c = 1;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < (b - 1);j++) {
			cout << " ";
		}
		for (int k = 0; k < c; k++) {
			cout << "*";
		}
		c += 2;
		b -= 1;
		cout << "\n";

	}
	return 0;
}  