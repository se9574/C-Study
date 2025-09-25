#include <stdio.h>
static int Rev(int x) {
	int reverse=0;
	while (x) {
		reverse = reverse * 10 + x % 10;
		x /= 10;
	}
	return reverse;
}
int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", Rev(Rev(x) + Rev(y)));
	return 0;
}