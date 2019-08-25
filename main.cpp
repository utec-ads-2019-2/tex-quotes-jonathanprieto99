#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){

    long contador_comillas,longitud,p=0;
    char texto[100000];
    while(gets(texto))
    {
        longitud=strlen(texto);
        for(contador_comillas=0;contador_comillas<longitud;contador_comillas++)
        {
            if(texto[contador_comillas]=='"')
            {
                p=p+1;
                if(p%2==1)
                {
                    printf("``");
                }

                else
                {
                    printf("''");
                }
            }
            else
                printf("%c",texto[contador_comillas]);
        }
        printf("\n");

    }
    return 0;
}