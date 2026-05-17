#include <stdio.h>

int main() {
    double f_double, c_double;
    int f_int, c_int;

    
    scanf("%lf", &f_double);
    c_double = (f_double - 32.0) * (5.0 / 9.0);
    printf("Celsius exato (double): %lf\n", c_double);

    scanf("%d", &f_int);
    c_int = (f_int - 32) * (5 / 9); 
    printf("Celsius falho (int): %d\n", c_int);

    return 0;
}