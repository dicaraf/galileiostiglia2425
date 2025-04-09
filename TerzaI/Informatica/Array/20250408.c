/* Riempi una matrice di 5x5 con numeri 
casuali tra 1 e  10. Metti nella diagonale principale della matrice l'elemento in ultima posizione.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RIGHE 5
#define COLONNE 5

void StampaMatrice(int matrice[][COLONNE], int r);
void RiempiMatrice(int matrice[][COLONNE], int r);

int main(){
    int mat[RIGHE][COLONNE];
    srand(time(NULL));
    RiempiMatrice(mat, RIGHE);
    StampaMatrice(mat, RIGHE);
    
    for(int i=0; i<RIGHE; i++){
        mat[i][i]=mat[RIGHE-1][RIGHE-1];
    }
}
void StampaMatrice(int matrice[][COLONNE], int r){
    for(int i=0; i<r; i++){
        for(int j=0; j<COLONNE; j++){
            printf("%d\t" matrice[i][j]);
        }
        printf("\n");
    }
}
void RiempiMatrice(int matrice[][COLONNE], int r){
    for(int i=0; i<r; i++){
        for(int j=0; j<COLONNE; j++){
            matrice[i][j]=rand()%10+1;

    }
}