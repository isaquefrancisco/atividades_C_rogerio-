#include <stdio.h>

int main() {
    int v1, v2;
    
    printf("Digite dois valores (separados por espaco): ");
    scanf("%d %d", &v1, &v2);

    if (v1 < v2) {
        for (int i = v1; i <= v2; i++) printf("%d ", i);
    } else if (v1 > v2) {
        for (int i = v1; i >= v2; i--) printf("%d ", i);
    } else {
        printf("valores iguais");
    }

    return 0;
}