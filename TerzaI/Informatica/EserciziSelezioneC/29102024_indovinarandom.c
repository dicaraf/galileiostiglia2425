/*Scrivi un programma in C che generi un numero casuale compreso tra 1 e 20 e permetta all'utente di indovinarlo in massimo 5 tentativi. Usa la variabile flag per capire quando viene indovinata la variabile.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){

    srand(time(NULL));

    int n1=0;
    int Nindovinato=0;
    int flag=0;
    int contatore=0;

    n1=rand()%20+1;

    printf("tenta di indovinare il numero: ");
    scanf("%d", &Nindovinato);
    contatore=contatore + 1;

    if(Nindovinato == n1){
        printf("hai indovinato il numero!");
        flag=1;
    }
    else{
        printf("non hai indovinato il numero!");
    }

    if(flag == 0){
        printf("ritenta di indovinare il numero: ");
        scanf("%d", &Nindovinato);
        contatore+=1; //contatore=contatore + 1

        if(Nindovinato == n1){
            printf("hai indovinato il numero!");
            flag=1;
        }
        else{
            printf("non hai indovinato il numero!");
        }
    }
    if(flag == 0){
        printf("ritenta di indovinare il numero: ");
        scanf("%d", &Nindovinato);
        contatore++;

        if(Nindovinato == n1){
            printf("hai indovinato il numero!");
            flag=1;
        }
        else{
            printf("non hai indovinato il numero!");
        }
    }
    if(flag == 0){
        printf("ritenta di indovinare il numero: ");
        scanf("%d", &Nindovinato);
        contatore++;

        if(Nindovinato == n1){
            printf("hai indovinato il numero!");
            flag=1;
        }
        else{
            printf("non hai indovinato il numero!");
        }

    }
    if(flag==1)
        printf("hai indovinato con: %d tentativi", contatore);
    else
        printf("non ce l'hai fatta neanche in 5 tentativi!");
    return 0;
}