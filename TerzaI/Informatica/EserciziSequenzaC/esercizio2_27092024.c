/*3) Calcola l’importo totale da pagare al cinema, sapendo che, 
ogni 12 studenti, spetta una gratuità e che per chi ha meno di 
15 anni il biglietto è scontato del 40%: leggi in ingresso il numero 
di studenti, il numero di studenti con meno di 15 anni e il costo 
del biglietto.*/

#include <stdio.h>

int main(){
    int numero_studenti, numero_studenti_minori, biglietti_gratis;
    float costo_biglietto, costo_totale;
    printf("inserisci numero totale studenti: ");
    scanf("%d", &numero_studenti);
    printf("inserisci numero totale studenti minori di 15 anni: ");
    scanf("%d", &numero_studenti_minori);
    printf("inserisci costo singolo biglietto: ");
    scanf("%f", &costo_biglietto);
    biglietti_gratis = numero_studenti/12;
    costo_totale = costo_biglietto * numero_studenti_minori * 60 / 100;
    costo_totale = costo_totale + costo_biglietto * (numero_studenti-biglietti_gratis-numero_studenti_minori);
    printf("Il costo totale è %f€\n", costo_totale);
    printf("Hai avuto %d biglietti gratis", biglietti_gratis);

    return 0;
}