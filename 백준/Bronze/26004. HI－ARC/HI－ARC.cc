#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N=0, min=100001;
	cin >> N;
	vector<char> S(N);
	for (int i = 0;i < N;i++) {
		cin >> S[i];
	}
	vector<int> result(5);
	result[0] = count(S.begin(), S.end(), 'H');
	result[1] = count(S.begin(), S.end(), 'I');
	result[2] = count(S.begin(), S.end(), 'A');
	result[3] = count(S.begin(), S.end(), 'R');
	result[4] = count(S.begin(), S.end(), 'C');
	for (int i = 0; i < 5;i++) {
		if (result[i] < min) {
			min = result[i];
		}
	}

	cout << min;
}