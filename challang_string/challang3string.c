#include<stdio.h>
#include<string.h>

int main(){

    char mesage1[50],mesage2[50],mesage3[100];
    int i,t,j=0;

printf("Entrer le message 1 : ");
scanf(" %[^\n]s",mesage1);
printf("Entrer le message 2 : ");
scanf(" %[^\n]s",mesage2);
t=strlen(mesage1)+strlen(mesage2);
for(i=0;i<t;i++){

    if(i<strlen(mesage1))
    {
        mesage3[i]=mesage1[i];
    }
    else
    {
        mesage3[i]=mesage2[j];
        j++;
    }
}
printf("Chine resultatante : %s",mesage3);


    return 0;
}