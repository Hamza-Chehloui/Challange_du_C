#include<stdio.h>
#include<string.h>


int main()
{

    char n[50],c;
    int i,j=0;

    printf("Entrer le message : ");
    scanf(" %[^\n]s",n);
    printf("Entre un caractere : ");
    scanf(" %c",&c);

    for(i=0;i<strlen(n);i++){

        if(n[i] == c){

                j++;
        }

    }
    printf("Le caractere %c apparait dans la chaine : %d",c,j);

    return 0;
}