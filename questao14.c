#include <stdio.h>

int main () {

float preco, unidades;
printf ("Qual o preço do produto?");
scanf ("%f", &preco);
printf("Quantas unidades?");
scanf ("%f", &unidades);

printf("O valor final é: %0.2f", unidades*preco);
return 0;
} 
