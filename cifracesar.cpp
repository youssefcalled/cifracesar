#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

    char decifra[100];
    char palavra[100] = "XQLYHUVLGDGH kdfnhu";
    int i;

    strlwr(palavra);

     for(i = 0; i < strlen(palavra); i++){

        if(palavra[i] == ' '){
            continue;
        }

        else if(palavra[i] < 100){
            decifra[i] = (palavra[i] + 26) - 3 ;
        }

        else{
            decifra[i] = palavra[i] - 3;
        }

    }

     for(i = 0; i < strlen(palavra); i++)
        printf("%c",decifra[i]);

    return 0;
}
