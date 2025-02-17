/*Dato un numero scelto dall'utente, mostrare un messaggio che dica se è un numero primo oppure no.*/
#include <stdio.h>
int main(){
    int num;
    int cnt=0;

    do{
        printf("Inserisci un valore: ");
        scanf("%d", &num);
    }while(num<0);

    for(int i=2; i<num; i++){
        if(num%i==0)
        cnt++;
    }
    if(cnt!=0){
        printf("%d non è un numero primo", num);
    }else{
        printf("%d è un numero primo", num);
    }


}