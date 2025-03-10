#include <stdio.h>

int main() {

float metros;

printf ("Qual o valor em Metros? ");
scanf ("%f", &metros);
printf ("Centimetros: %0.0f", metros*100);
printf ("\nDecimetros: %0.0f", metros*10 );
printf ("\nMilimetros: %0.0f", metros*1000);



    return 0;
}
