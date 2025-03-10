#include <stdio.h>
#include <math.h>


int main() {
    double angulo_graus, rad;

   
    printf("Digite um ângulo em graus: ");
    scanf("%lf", &angulo_graus);
    
    rad = M_PI * (angulo_graus/180);
    
    printf("Seno de %.2f°: %.4f\n", angulo_graus, sin(rad));
    printf("Cosseno de %.2f°: %.4f\n", angulo_graus, cos(rad));
    printf("Tangente de %.2f°: %.4f\n", angulo_graus, tan(rad));
    
    return 0;
}
