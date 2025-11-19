#include <stdio.h>
#include <stdlib.h>


char* combine_group(char* str) {
    int read = 0;   
    int write = 0; 

    while (str[read] != '\0') {
        if (write == 0 || str[read] != str[write - 1]) {
            str[write] = str[read];
            write++;
        }
        read++;
    }

    str[write] = '\0';
    return str;     
}

int check_same(char* str) {
    int read = 0;
    int write = 0;
    while(str[read] != '\0') {
        while(str[write] != '\0') {
            if(str[read] == str[write] && read != write) {
                return 1; 
            }
            write++;
		}
        read++;
        write = 0;
    }
	return 0;
}

int main(void) {
    char tmp[101];
    int N;
	int total = 0;
	scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%100s", tmp);
		switch(check_same(combine_group(tmp))) {
            case 0:
                total++;
                break;
            case 1:
                break;
        }
    }
    printf("%d\n", total);
	return 0;


}
