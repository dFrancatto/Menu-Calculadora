#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int menu, n1,n2,result;

    do{

    system("cls");
    printf("Menu:\n\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n\n");

    printf("opcao:  ");
    scanf("%d", &menu);


        switch (menu) {

            case 1:{
                system("cls");
                printf("SOMA\n\n");
                printf("Digite um numero: ");
                scanf("%d", &n1);
                printf("Digite um numero: ");
                scanf("%d", &n2);
                result = n1 + n2;
                printf("\n\nResultado = %d\n\n\n", result);
                system("pause");
                system("cls");

                break;
            }
            case 2: {
                system("cls");
                printf("SUBTRACAO\n\n");
                printf("Digite um numero: ");
                scanf("%d", &n1);
                printf("Digite um numero: ");
                scanf("%d", &n2);
                result = n1 - n2;
                printf("\n\nResultado = %d\n\n\n", result);
                system("pause");
                system("cls");

                break;
            }
            case 3: {
                system("cls");
                printf("MULTIPLICACAO\n\n");
                printf("Digite um numero: ");
                scanf("%d", &n1);
                printf("Digite um numero: ");
                scanf("%d", &n2);
                result = n1 * n2;
                printf("\n\nResultado = %d\n\n\n", result);
                system("pause");
                system("cls");

                break;
            }
            case 4: {
                system("cls");
                printf("DIVISAO\n\n");
                printf("Digite um numero: ");
                scanf("%d", &n1);
                printf("Digite um numero: ");
                scanf("%d", &n2);

                 if (n1==0 || n2 == 0) {
                    result = 0;

                }
                else {
                    result = n1 / n2;
                }
                printf("\n\nResultado = %d\n\n\n", result);
                system("pause");
                system("cls");



                break;
            }

        }
    }

    while (menu != 5);
    system("cls");


    return 0;
}
