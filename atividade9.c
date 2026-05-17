#include <stdio.h>

int main() {
    float n1, n2;
    char operador;
    
    printf("Digite a conta que quer fazer (exemplo: 5 + 3 ou 10 * 2): ");
    scanf("%f %c %f", &n1, &operador, &n2);

    switch(operador) {
        case '+': printf("Resultado: %f\n", n1 + n2); break;
        case '-': printf("Resultado: %f\n", n1 - n2); break;
        case '*': printf("Resultado: %f\n", n1 * n2); break;
        case '/': printf("Resultado: %f\n", n1 / n2); break;
        default: printf("Operador invalido!\n"); break;
    }

    return 0;
}