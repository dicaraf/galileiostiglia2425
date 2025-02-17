/*Dato un numero scelto dall'utente compreso tra 1 e 10, mostra il valore del fattoriale.
Es. n=4, fatt=f=24*/

#include <stdio.h>

int main(){
    int num=0;
    long fatt=1;

    do{
        printf("inserisci un numero pls: ");
        scanf("%d", &num);
    }while(num<1 || num>10);

    for(int i=1; i<=num; i++){
        fatt*=i;
    }
    printf("il numero %d ha il fattoriale di %ld", num, fatt);

}