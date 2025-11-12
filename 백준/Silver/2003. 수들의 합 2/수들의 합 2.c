#include <stdio.h>
#include <stdlib.h>

int two_pointer(int* arr, int size, long long int M) {
	int start = 0, end = 0;
    long long int sum = 0;
    int count = 0;
    while (1) {
        if (sum >= M) {
            if (sum == M) {
                count++;
			}
            sum -= arr[start];
            start++;
        }
        else if (sum < M) {
            if (end == size){ break; }
            sum += arr[end++];
        }
    }
    return count;
}


int main(void) {
    int N;
    long long int M;
	scanf("%d %lld", &N, &M);
    int* str = malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &str[i]);
	}
	printf("%d", two_pointer(str, N , M));
    free(str);
	return 0;
}