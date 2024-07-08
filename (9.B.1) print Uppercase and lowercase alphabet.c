#include <stdio.h>

int main() {
    char up='A',lc='a';

    printf("Uppercase Alphabets:\n");
    while (up<='Z') {
        printf("%c ",up);
        up++;
    }

    printf("\n\nLowercase Alphabets:\n");
    while (lc<='z') {
        printf("%c ",lc);
        lc++;
    }

    return 0;
}
