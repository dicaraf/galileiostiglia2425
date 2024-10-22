#include <stdio.h>

int main(){

    int numero;

    printf("Inserisci un numero:");
    scanf("%d", &numero);

    switch(numero) {
        case 1:
            printf("é lunedì");
            break;
        case 2:
            printf("é martedì");
            break;
        case 3:
            printf("é mercoledì");
            break;
        case 4:
            printf("é giovedì");
            break;
        case 5:
            printf("é venerdì");
            break;
        case 6:
            printf("é sabato");
            break;
        case 7:
            printf("é domenica");
            break;
        default:
            printf("Il numero inserito non è valido");
    }

    if (numero>=1 && numero<=7)
        if(numero == 1 )
            printf(" è lunedi");
        else if( numero == 2)
            printf("è martedi");
        else if( numero == 3)
            printf("è mercoledì");
        else if( numero == 4)
            printf("è giovedì");
        else if( numero == 5)
            printf("è venerdì");
        else if( numero == 6)
            printf("è sabato");
        else if( numero == 7)
            printf("è domenica");
    else
        printf("Valore non valido");

        
    return 0;
}