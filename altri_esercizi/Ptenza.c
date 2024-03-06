#include <stdio.h>
#include <math.h>

int main() {
    int base, esponente;
    int risultato;

    printf("\nInserire la base: ");
    scanf("%d", &base);

    printf("\nInserire l'esponente: ");
    scanf("%d", &esponente);

    risultato = pow(base, esponente);

    printf("%d elevato a %d = %d\n", base, esponente, risultato);

    return 0;
}