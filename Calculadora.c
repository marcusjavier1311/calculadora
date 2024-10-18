#include<stdio.h>

int main(){

    char calculadora;
    double PrimerNum,SegunNum;

    printf("Selecciona tu operador (+,-,*,/): ");
    scanf("%c", &calculadora);

    printf("Escribe 2 operadores: ");
    scanf("%lf %lf", &PrimerNum, &SegunNum);

    switch(calculadora){

        case '+':
            printf("%.1lf + %.1lf = %.1lf \n", PrimerNum, SegunNum, PrimerNum + SegunNum );
            break;

         case '-':
            printf("%.1lf - %.1lf  = %.1lf \n", PrimerNum, SegunNum, PrimerNum - SegunNum );
            break;

         case '*':
            printf("%.1lf * %.1lf  = %.1lf \n", PrimerNum, SegunNum, PrimerNum * SegunNum );
            break;

         case '/':
            printf("%.1lf / %.1lf  = %.1lf \n", PrimerNum, SegunNum, PrimerNum / SegunNum );
            break;
            default:
                printf("El operador no es correcto ");
        
    }

}