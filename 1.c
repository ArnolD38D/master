#include <stdio.h>

int main(){
    int num;
    char c;
    if ((scanf("%d%c", &num, &c) == 2) && (c == '\n' || c == ' ') && (num >= -1)) {
        printf("\nHi\n");
    } else {
        printf("n/a");
    }

}