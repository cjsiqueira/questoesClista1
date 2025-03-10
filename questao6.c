#include <stdio.h>
#define ano_atual 2025

int main () {
int ano_nascimento, idade ;
printf ("Qual seu ano de nascimento?");
scanf("%i", &ano_nascimento);
idade = ano_atual - ano_nascimento;
printf ("Voce tem %i ano(s).", idade);

return 0;

}
