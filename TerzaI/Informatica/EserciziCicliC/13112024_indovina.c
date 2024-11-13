/*Genera un numero casuale compreso tra 10 e 1000 e chiedi all'utente di indovinare il numero finchè non azzecca. Per ogni numero inserito dai un suggerimento all'utente specificando se il tentativo è minore o maggiore del numero da indovinare.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int numcasuale=0,num=0;
    int contatore=0;
    numcasuale=random()%991+10;

    while(numcasuale!=num){
        printf("\nprova ad indovinare il numero: ");
        scanf("%d", &num);
        contatore++;

        if(numcasuale<num)
            printf("\nil numero inserito è maggiore del numero da indovinare");
        else if(numcasuale>num)
            printf("\nil numero inserito è minore del numero da indovinare");
    }
    printf("\nhai indovinato il numero in %d tentativi!", contatore);
        

}