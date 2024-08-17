#include <stdio.h>

int main() {
    // Variável para armazenar o comprimento do lado do quadrado
    double lado;
    
    // Solicita ao usuário o comprimento do lado do quadrado
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%lf", &lado);
    
    // Calcula a área do quadrado
    double area = lado * lado;
    
    // Calcula o dobro da área
    double dobro_area = 2 * area;
    
    // Exibe o dobro da área
    printf("O dobro da área do quadrado é: %.2f\n", dobro_area);
    
    return 0;
}