
/*Scrivere un programma che chieda un numero intero in input e mostri in output se il numero è pari o dispari usando il metodo delle sottrazioni successive.*/
#include <stdio.h>

int main(){
    int lonighi;
    printf("inserisci un numero: ");
    scanf("%d", &lonighi);
    while(lonighi>=2){
        lonighi=lonighi-2;
    }
    if(lonighi==0){
        printf("il numero è pari");
    }
    else{
        printf("il numero è dispari");
    }

    return 0;
}