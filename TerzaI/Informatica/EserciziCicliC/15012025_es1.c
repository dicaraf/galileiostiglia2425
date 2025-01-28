/*1) Data una serie di N numeri (con N scelto dall'utente maggiore di 3) determinare il valore più grande e quello immediatamente inferiore (il secondo).*/
#include <stdio.h>
int main(){
    int N;
    int num;
    int magg;
    int magg2;
    do{
        printf("inserisci un valore N: ");
        scanf("%d", &N);
    }while(N<=3);
    printf("inserisci un numero: ");
    scanf("%d",&num);
    magg=num;
    printf("inserisci un numero: ");
    scanf("%d",&num);
    if(num>magg){
        magg2=magg;
        magg=num;
    }
    for(int i=2; i<N; i++){
        printf("inserisci un numero: ");
        scanf("%d", &num);
        if(num>magg){
            magg2=magg;
            magg=num;

        }else if(num>magg2 && num!=magg){
            magg2=num;
            
        }
    }printf("\n%d", magg);
    printf("\n%d", magg2);
}