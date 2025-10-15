#include <stdio.h>



int main() {
	char a[101];
	scanf("%s", a);
	for (int i = 'a'; i <= 'z'; i++) {
		int j = 0, out = -1;
		while(a[j] != '\0') {
			if (a[j] == i) {
				out = j;
                break;
			}
			j++;
		}
		printf("%d%c", out, i == 'z' ? '\n' : ' ');
	}
}