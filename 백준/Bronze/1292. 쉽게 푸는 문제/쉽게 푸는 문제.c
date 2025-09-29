#include <stdio.h>

int main(void) {
    int A, B;
    if (scanf("%d %d", &A, &B) != 2) return 0;

    int num = 0, result = 0;
    for (int i = 1; num < B; i++) {
        for (int j = 1; j <= i && num < B; j++) {
            num++;                 
            if (num >= A) result += i;
        }
    }
    printf("%d\n", result);
    return 0;
}