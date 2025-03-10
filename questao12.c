#include <stdio.h>
#include <math.h>

int main () {

double numero;
printf ("Digite um numero:");
scanf ("%lf", &numero);

printf ("Raiz Quadrada: %0.2lf", sqrt(numero));
printf ("\nPotência: %0.2lf", pow(numero, 2));
return 0;
}
