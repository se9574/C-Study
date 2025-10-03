#include <stdio.h>
#include <stdlib.h>


int main() {
	long long int a;
	int time[10] = { 0 },ans=0;
	scanf("%lld", &a);
	while (a > 0) {
		time[a % 10]++;
		a /= 10;
	}
	time[6] = (time[6]+time[9] + 1) / 2;
	time[9] = 0;
	for(int i=0;i<=9;i++)
		if (time[i] > ans) {	
			ans = time[i];
		}

	printf("%d", ans);
}
