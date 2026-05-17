#include <stdio.h>

int main() {
    float preco, novo_preco;
    
    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    
    novo_preco = (preco < 100) * (preco * 1.10) + (preco >= 100) * (preco * 1.20);
    
    printf("Preco com inflacao: R$ %.2f\n", novo_preco);
    return 0;
}