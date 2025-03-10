#include <stdio.h>

int main () {

int numero;

printf ("Digite seu numero:");
scanf ("%i", &numero);

printf("Decimal: %i", numero);
printf ("\nHexadecimal: %x", numero);
printf ("\nOctal: %o", numero);
return 0;

}
