#include <stdio.h>

int main() {
    int h_in, m_in, h_out, m_out, min_total_in, min_total_out, diferenca_min, horas_cobradas;
    float preco = 0;

    printf("Digite a hora e minuto de CHEGADA (ex: 12 50): ");
    scanf("%d %d", &h_in, &m_in);
    
    printf("Digite a hora e minuto de SAIDA (ex: 14 30): ");
    scanf("%d %d", &h_out, &m_out);

    
    min_total_in = (h_in * 60) + m_in;
    min_total_out = (h_out * 60) + m_out;
    diferenca_min = min_total_out - min_total_in;

    
    if (diferenca_min < 0) {
        diferenca_min += (24 * 60); 
    }

    
    horas_cobradas = (diferenca_min + 59) / 60;

    
    if (horas_cobradas <= 2) {
        preco = horas_cobradas * 1.00;
    } else if (horas_cobradas <= 4) {
        preco = 2.00 + ((horas_cobradas - 2) * 1.40); 
    } else {
        preco = 2.00 + 2.80 + ((horas_cobradas - 4) * 2.00); 
    }

    printf("Preco final a pagar: R$ %.2f\n", preco);
    return 0;
}