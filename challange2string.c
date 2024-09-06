#include<stdio.h>

int main(){

    char n[100];
    int i,c=0;
    printf("Entrer le message : ");
    scanf("%[^\n]s",n);
   while(n[c]!='\0')
   {
       c++;

   }
    printf("\nLe longuer d'une chaine est : %d",c);


        return 0;
}
