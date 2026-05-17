#include <stdio.h>

int main() {

    float metros,decimetros,centimetros,milimetros;

    printf("digite o valor em metros:");
    scanf("%f", &metros);


    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;


    printf("resultados");
    printf("%.2f metros equivalem a: \n", metros);
    printf("%.2f decimetros \n", decimetros);
    printf("%.2f centimetros \n", centimetros);
    printf("%.2f milimetros \n", milimetros);
    


    return 0;

}