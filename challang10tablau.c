#include<stdio.h>

int main()
{
    int m,i,x=0;
    float n[100],elem;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);

    }

    printf("\n");
    printf("Entrer les element a rechercher : ");
    scanf("%f",&elem);
    for(i=0;i<m;i++){

        if(elem==n[i]){
            printf("Element %.2f est present \n",n[i]);
            x=1;

        }
    }
    if(x==0){
        printf("%.2f les element non present \n",elem);

    }

    return 0;

}
