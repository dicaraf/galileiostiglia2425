/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.*/

#include <stdio.h>

int main(){
    float num=0, somma = 0;
    float media = 0;
    int conta = 0;

    while(somma<200 && conta<10){
        printf("Inserisci il primo numero:");
        scanf("%f", &num);
        conta = conta + 1; //conta++;   conta+=1;
        somma = somma + num;
    }

    media = somma / conta;
    printf("\nla media è %.2f, il numero di tentativi è %d", media, conta);
}