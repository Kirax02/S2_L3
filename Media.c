#include <stdio.h>

int main() {
    int numero1, numero2;
    float media;

    printf("Inserire il primo numero: ");
    scanf("%d", &numero1);
    
    printf("Inserire il secondo numero: ");
    scanf("%d", &numero2);

    media = (numero1 + numero2) / 2.0;

    printf("La media aritmetica è: %.2f\n", media);

    return 0;
}