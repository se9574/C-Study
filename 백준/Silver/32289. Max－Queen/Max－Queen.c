#include <stdio.h>
#include <stdlib.h>

int main() {
	long long row, col;
	long long sum = 0;
	scanf("%lld %lld", &row, &col);
	sum += (row-1) * col;
	sum += (col - 1) * row;
	sum += (row - 1) * (col - 1) * 2;
	printf("%lld\n", sum);
}
