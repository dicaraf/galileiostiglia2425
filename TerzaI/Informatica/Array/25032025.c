/*riempi vettore ordinato
ricerca sequenziale
ricerca dicotomica/binaria*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void shiftDx (int vett[], int dim, int pos){
    for(int i=dim; i>pos; i--){
        vett[i]=vett[i-1];
    }
}
int trovaPosizione (int vett[], int dim, int num){
    int i=0;
    while(vett[i]<num && i<dim){
        i++;
    }
    return i;
}
int main(){
    int num=0, vett[10], pos=0;
    srand(time(NULL));
    printf("inserisci un valore: ");
        scanf("%d", &vett[0]);
    for(int i=1; i<10; i++){
        //printf("inserisci un valore: ");
        //scanf("%d", &num);
        num = rand()%7;
        pos=trovaPosizione(vett, i, num); 
        shiftDx(vett, i, pos);
        vett[pos]=num;
    }

    for(int i=0; i<10; i++) printf("%d - ", vett[i]);
}