/*Gioco della Morra cinese: supponendo sasso=1, carta=2, forbice=3, chiedere all’utente la sua scelta e far generare al computer la sua.
Stabilire il vincitore.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int sceltautente=0, sceltacomputer=0;

    sceltacomputer = rand()%3+1;
    printf("scegli tra sasso=1, carta=2, forbice=3: ");
    scanf("%d", &sceltautente);

    if(sceltautente==1 || sceltautente==2 || sceltautente==3){ //controllo se la scelta dell'utente è valida
        if(sceltacomputer==sceltautente){ //controllo il caso particolare del pareggio
            printf("Pareggio!");
        } else if(sceltautente == 1 && sceltacomputer==3){ //controllo i casi in cui vince l'utente
            printf("Hai vinto carissimo utente!");
        } else if(sceltautente==2 && sceltacomputer==1){
            printf("Hai vinto carissimo utente!");
        } else if(sceltautente==3 && sceltacomputer == 2){
            printf("Hai vinto carissimo utente!");
        } else {                                        // il caso che rimane equivale a tutti quelli in cui vince il computer
            printf("Ha vinto il computer sparando a caso!");
        }
    } else{
        printf("Scelta non valida :((( ");
    }


    return 0;
}