/*scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 e che indica quanti valori della sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.*/
#include<stdio.h>
int main()
{
    long long num=0,num1=1,num2=1,num3=0,contatore=2;
    printf("Inserisci un valore maggiore di 3:\t");
    scanf("%lld", &num);
    while (num<3)
    {
        printf("Inserisci un valore maggiore di 3:\t");
        scanf("%lld", &num);
    }
    printf("%lld %lld",num1,num2);
    while (num!=contatore)
    {
        num3=num1+num2;
        printf(" %lld",num3);
        num1=num2;
        num2=num3;
        contatore++;
    }
    
    
        
    
}