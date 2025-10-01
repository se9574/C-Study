#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, T, num;
	long long save=0;
	scanf("%d", &N);
	scanf("%d", &T);
	int* str = (int*)malloc((size_t)2 * N * sizeof(int));
	for (int i = 0; i < 2 * N; i++) {
		scanf("%d", &str[i]);
	}
	for (int i = 0; i < T; i++) {
		scanf("%d", &num);
		long long res = (num-1+save) % (2 * N);
		printf("%d%c", str[(int)res], (i + 1 == T) ? '\n' : ' ');
		save += num-1	;
	}
}