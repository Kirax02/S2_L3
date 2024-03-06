#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int prodotto;

    printf("\nInserire il primo numero: ");
    scanf("%d", &numero1);

    printf("\nInserire il secondo numero: ");
    scanf("%d", &numero2);

    prodotto = numero1 * numero2;

    printf("Ilprodotto è: %d\n", prodotto);

    return 0;
}