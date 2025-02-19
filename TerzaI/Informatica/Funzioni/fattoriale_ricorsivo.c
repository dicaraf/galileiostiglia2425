#include <stdio.h>

int fattoriale(int n){
    if(n==0)
        return 1;
    else{
        printf("%d\t", n);
        return n*fattoriale(n-1);

    }
        
}

int main(){
    int numero = 0;
    printf("Inserisci numero di cui calcolare fattoriale: ");
    scanf("%d", &numero);
    printf("%d", fattoriale(numero));
    return 0;
}