#include<stdio.h>
#include<string.h>


int main()
{

    char n[50];


    printf("Entrer le message : ");
    scanf(" %[^\n]s",n);

    printf("Les caracter en majuscules est : %s",strupr(n));

    return 0;
}