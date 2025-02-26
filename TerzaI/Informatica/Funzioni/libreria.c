#include "libreria.h"
int maggiore(int num1, int num2) {
    int max;
    if(num1>num2){
        max = num1;
    } else {
        max = num2;
    }
    return max;
}

int minore(int num1, int num2) {
    int min;
    if(num1<num2){
        min = num1;
    } else {
        min = num2;
    }
    return min;
}