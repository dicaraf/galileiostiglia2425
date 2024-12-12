/*Dati in input 10 numeri interi determinare il valore maggiore e quante volte compare. */

#include <stdio.h>

int main(){
    int n, max, cnt=0;

    for(int i=0; i<10; i++){
        printf("Inserisci un valore: ");
        scanf("%d", &n);
        if(i==0)
            max=n;
        if(n>max){
            max=n;
            cnt=1;
        }
        else if(n==max)
            cnt++;

    }
    printf("Il numero maggiore è %d", max);
    printf("Compare %d volte", cnt);
    //3 5 7 5 7 7 2 1
}