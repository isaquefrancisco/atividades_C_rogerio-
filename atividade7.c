#include <stdio.h>

int main() {
    printf(" abela ASCII\n");
    for (int i = 0; i <= 127; i++) {
        printf("Dec: %d | Hexa: %X | Char: %c \n", i, i, i);
    }
    return 0;
}