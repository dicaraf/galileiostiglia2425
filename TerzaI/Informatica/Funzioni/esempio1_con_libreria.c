/*Realizziamo una funzione che determina e restituisce il valore maggiore tra due numeri*/
#include <stdio.h>
#include "libreria.h"
#include "libreria.c"

int main() {
    int n1, n2;
    printf("Inserisci il primo valore: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo valore: ");
    scanf("%d", &n2);
    printf("Il maggiore tra i due è %d", maggiore(n1, n2));
    printf("Il minore tra i due è %d", minore(n1, n2));
    int m = maggiore(n1, n2);


    return 0;
}

