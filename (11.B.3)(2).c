#include <stdio.h>

int main() {
    printf("ASCII Character\tDecimal Value\n");

    for(int i = 0; i <= 127; i++) {
        printf("%c\t%d\n", i, i);
    }

    return 0;
}
