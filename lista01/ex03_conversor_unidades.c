//Exercício 3 – Conversor de Unidades

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    float metros, km;
    float kg, libras;

    // Temperatura
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    // Distância
    printf("\nDigite a distancia em metros: ");
    scanf("%f", &metros);
    km = metros / 1000;
    printf("Distancia em quilometros: %.3f\n", km);

    // Peso
    printf("\nDigite o peso em quilos: ");
    scanf("%f", &kg);
    libras = kg * 2.20462;
    printf("Peso em libras: %.2f\n", libras);

    return 0;
}

