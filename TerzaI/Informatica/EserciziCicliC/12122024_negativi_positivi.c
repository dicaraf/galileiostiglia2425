/*Dati N numeri in input (con N chiesto all'utente strettamente maggiore di 5), calcolare e mostrare la somma dei numeri negativi e dei numeri positivi.*/


#include <stdio.h>
int main(){
    int N=0;
    int num=0;
    int somma_positivi=0;
    int somma_negativi=0;

    do{
        printf("inserisci il numero di valori che vengano inseriti: ");
        scanf("%d", &N);
    }while(N<=5);

    for(int i=0; i < N; i++){
        printf("inserisci un numero: ");
        scanf("%d", &num);
        if(num < 0)
            somma_negativi += num;
        else somma_positivi += num;

    }
    printf("la somma dei positivi è %d", somma_positivi);
    printf("la somma dei negativi è %d", somma_negativi);

    return 0;
}