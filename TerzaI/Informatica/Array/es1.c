/*scrivi un programma che riempia un vettore di 10 elementi con i numeri pari successivi a un numero scelto dall'utente.
mostra gli elementi del vettore in posizione dispari al contrario.*/
#include <stdio.h>

#define DIM 10

int main(){
    int v[DIM];
    int num;
    printf("inserisci un valore: ");
    scanf("%d", &num);
    if(num%2==1){
        num+=1;
    }
    v[0]=num;
    for(int i=1; i<DIM; i++){
        v[i]=v[i-1]+2;
    }
    for(int j=DIM-1; j>=0; j--){
        printf("%d",v[j]);
    }
}