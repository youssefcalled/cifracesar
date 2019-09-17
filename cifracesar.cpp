#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

    char decifra[100];
    char palavra[100] = "xqlyhuvlgdgh kdfnhu";
    int i;


     for(i = 0; i < strlen(palavra); i++){

        if(palavra[i] == ' '){
            continue;
        }

        else if(palavra[i] == 97){
            decifra[i] = 120;
        }

        else if(palavra[i] == 98){
            decifra[i] = 121;
        }

        else if(palavra[i] == 99){
            decifra[i] = 122;
        }

        else{
            decifra[i] = palavra[i] - 3;
        }

    }

     for(i = 0; i < strlen(palavra); i++)
        printf("%c",decifra[i]);

}
