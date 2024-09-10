#include<stdio.h>

int main()
{
    int m,i,j;
    float n[100],mult;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);

    }
    printf("Entrer le facteur de multiplication : ");
    scanf("%f",&mult);
    printf("\n");
    printf("Resultant : \n");
    for(i=0;i<m;i++){

            printf("N[%d] = %.2f\n",i+1,n[i]*mult);
    }



    return 0;

}
