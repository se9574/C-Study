#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i=0;i<N;i++){
		if (i == 0) {
			for (int j = 0;j < (N-1);j++) {
				cout << " ";
			}
			cout << "*\n";
		}
		else {
			for (int k=0;k < (N-(i+1));k++) {
				cout << " ";
			}
			cout << "* ";
			for (int l=0; l < i-1;l++) {
				cout << "  ";
			}
			cout << "*\n";
		}
	}

}