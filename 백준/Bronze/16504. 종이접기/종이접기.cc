#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	long long result=0;
	cin >> N;
	cin.ignore();
	vector<int> num(N*N);
	for (int i = 0; i < (N * N); i++) {
		cin >> num[i];
	}
	for (int i = 0; i < (N * N); i++) {
		result += num[i];
	}
	cout << result;
}