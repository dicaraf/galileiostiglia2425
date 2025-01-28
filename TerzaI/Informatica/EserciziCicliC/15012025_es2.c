/*2) Date N coppie di numeri (con N generato casualmente con valori compresi tra 2 e 7) contare e stampare quelle che hanno i valori l'uno l'opposto dell'altro. (ad esempio 3 e -3 oppure -7 e 7)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int N=rand()%6+2;
    int num1, num2;
    int cont=0;

    for(int i=0; i<N; i++){
        printf("Inserisci 2 numeri: ");
        scanf("%d%d", &num1, &num2);
        if(num1==num2*(-1)){
            printf("%d  %d", num1, num2);
            cont++;
        }
    }printf("Abbiamo trovato %d", cont);
}