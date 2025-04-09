/*Scrivi un programma in C che riempia un vettore di 20 elementi con numeri compresi tra 1 e 10, stampi il vettore e quindi lo ribalti (in ultima posizione deve finire l'elemento in prima posizione e viceversa e così via).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 20
void riempiVett(int vett[], int dim);
void stampaVett (int vett[], int dim);
void RibaltaVett (int vett[], int dim);


int main(){
    srand(time(NULL));
    int vett[DIM];
    riempiVett(vett, DIM);
    stampaVett(vett, DIM);
    RibaltaVett(vett, DIM);
    stampaVett(vett, DIM);
}
void riempiVett(int vett[], int dim){
    for(int i=0; i<dim; i++){
        vett[i]=rand()%10+1;
    }
}
void stampaVett (int vett[], int dim){
    for(int i=0; i<dim; i++){
        printf("%d\t", vett[i]);
    }
    printf("\n");
}
void RibaltaVett (int vett[], int dim){
    int temp=0;

    for(int i=0; i<dim/2; i++){
        temp=vett[i];
        vett[i]=vett[dim-1-i];
        vett[dim-1-i]=temp;
    }
}