/*Scrivi un programma che legge un numero NUM strettamente positivo e visualizza tutti i numeri pari inferiori a tale numero fino a 0.*/

#include <stdio.h>

int main(){
    int num;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }while(num<0);
    if(num%2==1)
        num--;
    while(num>0){
        printf("%d\n", num);
        num=num-2;
    }
    return 0;
}