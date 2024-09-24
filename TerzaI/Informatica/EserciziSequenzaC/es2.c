/******************************************************************************

Esercizio: Scrivi un programma in C che mostri in output tutte le operazione
matematiche (somma, sottrazione, moltiplicazione e divisione) tra 2 numeri
con la virgola chiesti in input all'utente.

*******************************************************************************/

#include <stdio.h>//aggiungo la libreria stdio.h

int main() //inizio{
{
    //dichiarazione variabili
    float reale1,reale2;

    float somma, differenza, moltiplicazione, divisione;
    //richiesta valori in input all'utente
    printf("Inserisci il primo numero: ");
    scanf("%f", &reale1);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &reale2);
    //calcolo e assegnazione dei risultati delle operazioni
    somma=reale1+reale2;

    differenza=reale1-reale2;

    moltiplicazione=reale1*reale2;

    divisione=reale1/reale2;
    printf("la somma di %.2f+%f numeri è di %f\n",reale1,reale2,somma);//funzione di output
    printf("la differenza di %.2f-%f numeri è di %f\n",reale1,reale2,differenza);
    printf("la moltiplicazione di %.2f*%F numeri è di %f\n",reale1,reale2,moltiplicazione);
    printf("la divisione di %.2f/%f numeri è di %f\n",reale1,reale2,divisione);
    return 0;
}