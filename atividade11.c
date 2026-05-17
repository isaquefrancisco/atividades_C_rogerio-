#include <stdio.h>

int main() {
    int d, m, a, valido = 1; 
    
    printf("Digite a data de nascimento (dia mes ano, separados por espaco): ");
    scanf("%d %d %d", &d, &m, &a);

    if (a > 2008) valido = 0;
    else if (m < 1 || m > 12) valido = 0;
    else if (d < 1) valido = 0;
    else {
        if (m == 2) { 
            int bissexto = (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0));
            if (bissexto && d > 29) valido = 0;
            if (!bissexto && d > 28) valido = 0;
        } else if (m == 4 || m == 6 || m == 9 || m == 11) { 
            if (d > 30) valido = 0;
        } else { 
            if (d > 31) valido = 0;
        }
    }

    if (valido == 1) printf("=> data valida\n");
    else printf("=> data invalida\n");

    return 0;
}