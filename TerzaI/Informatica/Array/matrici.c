#include <stdio.h>
#include "libArray.c"


int main(){
    srand(time(NULL));
    int mat[10][10];

    for(int i=0; i<10; i++){
        riempiVettoreCasuale(mat[i], 10, 0, 100);
        stampaVettore(mat[i], 10, '\t');
        bubbleSort(mat[i], 10);
    }
    printf("\n\n\n");
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }



    return 0;


}