#include <stdio.h>


int main() {
    float PI = 3.14;
    float raggio, area;

    printf("\nInserire il raggio del cerchio: ");
    scanf("%f", &raggio);

    area = PI * raggio * raggio;

    printf("L'area del cerchio con raggio %.0f è %.2f\n", raggio, area);

    return 0;
}