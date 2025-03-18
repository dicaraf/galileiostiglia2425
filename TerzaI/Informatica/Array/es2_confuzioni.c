#include <stdio.h>
#define DIM 5
void stampaVettore(int dim, int v[]);

void riempiVettore(int dim, int v[]);


int main(){
    int vettore[DIM];

    riempiVettore(DIM, vettore);
}

void riempiVettore(int dim, int v[]){
    for(int i=0; i<DIM; i++){
        printf("Inserisci il valore per la cella %d", i);
        scanf("%d", &v[i]);
    }
}

void stampaVettore(int dim, int v[]){
    for(int i = 0; i<DIM; i++){
        printf("%d\t", *(v+i));
    }
}