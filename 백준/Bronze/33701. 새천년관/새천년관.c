#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
	srand((unsigned int)time(NULL));

	int length = rand() % 45;
	
	char str[46];
	for (int i = 0; i < length; i++) {
		str[i] = 'a' + (rand() % 26);
	}
	str[length] = '\0';
	int k_location = rand() % (length);
	str[k_location] = 'k';
	int n_location = rand() % (length);
	if (n_location == k_location) {
		while (n_location == k_location) {
			n_location = rand() % (length);
		}
	}
	str[n_location] = 'n';


	printf("n%sgwan\n", str);

}