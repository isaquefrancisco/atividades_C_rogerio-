#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2;
    scanf("%f %f", &n1, &n2);

    printf("a) Soma: %f\n", n1 + n2);
    printf("b) Produto 1o pelo quadrado do 2o: %f\n", n1 * (n2 * n2));
    printf("c) Quadrado do 1o: %f\n", n1 * n1);
    printf("d) Raiz da soma dos quadrados: %f\n", sqrt((n1*n1) + (n2*n2)));
    printf("e) Seno da diferenca: %f\n", sin(n1 - n2));
    printf("f) Modulo do primeiro: %f\n", fabs(n1));

    return 0;
}