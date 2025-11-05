#include <stdio.h>
#include <string.h>

int same(const char* a, size_t len) {
    int cur = 0, best = 0;
    for (size_t k = 0; k < len; k++) {
        if (a[k] == 'O') {
            cur++;
            best += cur;
        }
        else {  

            cur = 0;
        }
    }
    return best;
}

int main(void) {
    int t;                                     
    if (scanf("%d%*c", &t) != 1) return 1;    

    char tmp[81];                             
    for (int j = 0; j < t; j++) {
        if (!fgets(tmp, sizeof(tmp), stdin)) return 1; 
        size_t len = strcspn(tmp, "\n");        
        tmp[len] = '\0';                       
        printf("%d\n", same(tmp, len));
    }
    return 0;
}