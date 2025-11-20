#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_change_color_W(char arr[8][8], int M, int N) {
	int count = 0;
	for (int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			if((i + j) % 2 == 0) { 
				if(arr[i][j] != 'B') {
					count++;
				}
			} else { 
				if(arr[i][j] != 'W') {
					count++;
				}
			}
		}
	}
	return count;
}
int count_change_color_B(char arr[8][8], int M, int N) {
	int count = 0;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if ((i + j) % 2 == 0) {
				if (arr[i][j] != 'W') {
					count++;
				}
			}
			else {
				if (arr[i][j] != 'B') {
					count++;
				}
			}
		}
	}
	return count;
}

int main(void) {
    int M, N, count = 1000000;
	scanf("%d %d", &M, &N);
	char arr[51][51];
	for(int i = 0; i < M; i++) {
		scanf("%s", arr[i]);
		
	}
	for(int i=0; i <= M - 8; i++) {
		for(int j = 0; j <= N - 8; j++) {
			char sub_arr[8][8];
			int k, l;
			for (int k = 0; k < 8; k++) {
				for (int l = 0; l < 8; l++) {
					sub_arr[k][l] = arr[i + k][j + l];
				}
			}

			int count_W = count_change_color_W(sub_arr, 8, 8);
			int count_B = count_change_color_B(sub_arr, 8, 8);
			if(count_W < count) {
				count = count_W;
			}
			if(count_B < count) {
				count = count_B;
			}
		}
	}
	printf("%d\n", count);
	return 0;
}

    