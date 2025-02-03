

#include <stdio.h>

int SommaDivisori(int _numero);

int main(){
    int cnt=0;
    int num=1;

    while(cnt<10){
        if(num==SommaDivisori(num)){
            cnt++;
            printf("%d\n", num);
        }
        num++;
    }
}

int SommaDivisori(int _numero){
    int i;
    int somma=0;

    for(i=1; i<=_numero/2; i++){
        if(_numero%i==0)
        somma+=i;

    }
    return somma;
}