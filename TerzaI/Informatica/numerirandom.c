#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    printf("Numero casuale: %d\n", rand() % 31+1);
}
