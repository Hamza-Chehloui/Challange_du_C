#include<stdio.h>
#include<string.h>

int main(){

    char mesage1[50],mesage2[50];
    int i,t,j=0;

printf("Entrer le message 1 : ");
scanf(" %[^\n]s",mesage1);
printf("Entrer le message 2 : ");
scanf(" %[^\n]s",mesage2);
if(strcmp(mesage1,mesage2)==0){

    printf("Les chine sont egales \n");
}
else
{
    printf("Les chinees differentes \n");
}



    return 0;
}