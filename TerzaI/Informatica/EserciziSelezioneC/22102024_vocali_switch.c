
#include <stdio.h>

int main(){

    char a;
    
    printf("Inserisci una lettera");
    scanf("%c", &a);
    
    switch (a)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("è una vocale");
        break;


        default:
            printf("non è una vocale");
            break;
    }



}