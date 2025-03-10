#include <stdio.h>

int main () {

int an, razao, a1;

printf ("\nQual o primeiro termo da p.A? ");
scanf("%i", &a1);
printf ("\nQual a razão da p.A?");
scanf ("%i", &razao);
printf ("\nQual o termo que você quer saber?");
scanf("%i", &an);
printf ("O %i termo da p.A é: %i", an, (a1 + (an - 1)*razao));
return 0;
}
