#include <stdio.h>
#include <math.h>
int main(void)
{
    float n1, n2, resultado;
    int op;
    
    do{
        printf("-----------------------------------\n");
        printf("\tCALCULADORA MASSA\n");
        printf("-----------------------------------\n\n");
        printf("PARA SAIR DIGITE '0' EM TODAS AS OPÇÕES\n\n");
        printf("DIGITE O PRIMEIRO NÚMERO: ");
        scanf("%f", &n1);
        printf("\nDIGITE O SEGUNDO NÚMERO: ");
        scanf("%f", &n2);
        printf("-----------------------------------\n");
        printf("1 - ADICAO\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - MULTIPLICACAO\n");
        printf("4 - DIVISAO\n");
        printf("5 - EXPONENCIACAO\n");
        printf("6 - RAIZ QUADRADA(número 1)\n");
        printf("7 - SENO COSSENO TANGENTE(número 1)\n");
        printf("-----------------------------------\n");
        printf("ESCOLHA A OPERACAO: ");
        scanf("%d", &op);
            switch(op){
            case 1: printf("ADICAO");
                    resultado = n1 + n2;
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 2: printf("SUBTRACAO");
                    resultado = n1 - n2;
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 3: printf("MULTIPLICACAO");
                    resultado = n1 * n2;
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 4: printf("DIVISAO");
                    if (n2==0){
                    printf("\nDIVISAO POR 0 DETECTADA!!!");
                    return 0;
                    }
                    else {
                    resultado = n1 / n2;
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                    }
                break;
            case 5: printf("EXPONENCIACAO");
                    resultado = pow(n1, n2);
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 6: printf("RAIZ QUADRADA");
                    resultado = sqrt(n1);
                    printf ("\nO RESULTADO É: %.2f\n",resultado);
                break;
            case 7: float seno = sin(M_PI/n1);
                    float cosseno = cos(M_PI/n1);
                    float tangente = tan(M_PI/n1);
                    printf("\nSENO: %.2f\n",seno);
                    printf("\nCOSSENO: %.2f\n",cosseno);
                    printf("\nTANGENTE: %.2f\n",tangente);
                break;
            default: printf("OPERACAO INVALIDA!!!");
                break;
            }
    } while(n1!=0 , n2!=0 , op!=0);
}
