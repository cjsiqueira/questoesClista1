#include <stdio.h>

int main () {

float num1, num2;

printf("Digite o primeiro número:");
scanf ("%f", &num1);
printf("\nDigite o segundo número:");
scanf ("%f", &num2);

printf("Soma = %0.1f", num1 + num2);
printf("\nSubtração = %0.1f", num1 - num2);
printf("\nMultiplicação = %0.1f", num1 * num2);
printf("\nDivisão: %0.1f", (num1/num2));

return 0;

}
