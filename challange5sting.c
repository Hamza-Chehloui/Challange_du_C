#include<stdio.h>
#include<string.h>


int main()
{
    char n[50];
    printf("Entrer le chine : ");
    scanf("%[^\n]s",n);
    printf("\nInversion de Chine est : %s",strrev(n));

    return 0;
}