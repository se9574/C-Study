#include <stdio.h>
#include <stdlib.h>


int compare(const void* a, const void* b) {
    return strcmp((const char*)a, (const char*)b);
}
int main(void) {
    int N, I;
    char arr[100][101]; 

    scanf("%d %d", &N, &I);

    for (int i = 0; i < N; ++i) {
        scanf("%100s", &arr[i]);   
    }

    qsort(arr, (size_t)N, sizeof arr[0], compare);

    printf("%s\n", arr[I - 1]);
    return 0;
}