#include <stdio.h>

int main () {
float contador, soma, numeros;
float media;
    for (contador = 1; contador <= 3; contador++) {
        printf ("Digite o %0.0f numero", contador);
        scanf ("%f", &numeros);
        soma += numeros;    
    }
media = soma/(contador-1);
printf ("A média dos números digitados é: %0.2f", media);
return 0;
} 
