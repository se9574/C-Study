#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	long long M;
	cin >> N >> M;

	vector<int> int_a(N);
	for (int i = 0;i < N;i++) {
		cin >> int_a[i];
	}
	long long result = 1;
	for (int i = 0;i < N;i++) {
		result = (result * (int_a[i] % M)) % M;
	}
	cout << result;
}