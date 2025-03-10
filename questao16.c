#include <stdio.h>
#include <math.h>

int main () {
double a1, an, razao;
printf ("\nQual o primeiro termo da p.A? ");
scanf("%lf", &a1);
printf ("\nQual a razão da p.A?");
scanf ("%lf", &razao);
printf ("\nQual o termo que você quer saber?");
scanf("%lf", &an);

printf ("O %0.1lf termo da p.g é: %0.1lf", an, a1*(pow(razao, an - 1)));
}
