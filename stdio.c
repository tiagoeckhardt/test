#include <stdio.h>

int main() {
	int num;
        printf("Qual a maior floresta do mundo:\n");
        printf("1 – A floresta da Amazónia\n");
        printf("2 – A floresta do Congo\n");
        printf("3 – A floresta de Taiga\n");
        printf("4 – A floresta de Sinharaja\n");
        printf("Selecione a opção correcta 1, 2, 3 ou 4.\n");
        scanf("%d", &num);
        switch (num) {
        case 1: printf("Certo!\n"); break;
        case 2: printf("A floresta tropical do Congo é a segunda maior floresta tropical do mundo, cobrindo 1.800.000 km².\n"); break;
        case 3: printf("A floresta de Taiga tem a maior comunidade biótica.\n"); break;
        case 4: printf("A floresta de Sinharaja tem 21 km.\n"); break;
        default: printf("Número incorreto!\n");
        }
}
