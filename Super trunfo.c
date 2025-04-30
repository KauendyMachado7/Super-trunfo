#include <stdio.h>
#include <string.h>

int main() {
    char codigo[10];

    printf("Digite o código da carta: ");
    scanf("%s", codigo);

    if (strcmp(codigo, "A001") == 0) {
        printf("Código da carta: A001\n");
        printf("Estado: Paraná\n");
        printf("Cidade: Curitiba\n");
        printf("População: 1,774 milhão de habitantes\n");
        printf("Área: 432 km²\n");
        printf("PIB: R$98 bilhões\n");
        printf("Número de pontos turísticos: 35\n");
    } else {
        printf("Código.\n");
    }

    return 0;
}
