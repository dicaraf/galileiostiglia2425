/*Scrivi un programma che legge una sequenza di numeri interi terminanti con uno 0 (cioè il programma termina quando viene inserito 0) e ne ricerca il valore minimo visualizzandolo sullo schermo.*/

#include <limits.h>
#include <stdio.h>

int main(){
    int num;
    int min = INT_MAX;

    do{
        printf("Inserisci un numero");
        scanf("%d", &num);
        if(num<min)
            min=num;
    }
    while(num!=0);
    printf("il numero più piccolo è %d", min);

    return 0;
}