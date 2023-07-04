// exercício 3  
#include <stdio.h>

int v1, v2, v3, vt;

void main() {
    printf("Digite 3 Valores a seguir para Calcular a média\n");
    printf("Valor 1: ");
   scanf("%i", &v1);
    printf("Valor 2: ");
   scanf("%i", &v2);
    printf("Valor 3: ");
   scanf("%i", &v3);
   vt = (v1 + v2 + v3) / 3;
   printf("A méida dos três valores é de %i",vt);
   
    return 0;
}