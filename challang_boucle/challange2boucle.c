#include<stdio.h>

int main(){

        int i,j,lin,k;
        printf("Entere le  nombre des lignes : ");
        scanf("%d",&lin);

        for(i=1;i<=lin;i++)
        {
            for(j=i;j<=lin;j++)
            {
                printf(" ");
            }
            for(k=1;k<=i*2-1;k++)
               {
                 printf("*");
               }
            

           printf("\n");
           

        }



    return 0;
}