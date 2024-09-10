#include<stdio.h>

int main()
{
    int m,i,j;
    float n[100],petit;
    printf("Entrer le nombre de Tablau : ");
    scanf("%d",&m);
    printf("Entre les element du teblau : \n");
    for(i=0;i<m;i++){

        printf("Entrer N[%d] = ",i+1);
        scanf("%f",&n[i]);

    }
    petit=n[0];
    int tmp;
    printf("\n");
    printf("les element ordre croissant : \n");
    for(i=0;i<m;i++){

        for(j=i+1;j<m;j++){

            if(n[j]>n[i]){

                tmp=n[i];
                n[i]=n[j];
                n[j]=tmp;

            }
        }


    }

     for(j=0;j<m;j++){

        printf("%.2f\t",n[j]);
    }
 return 0;
}
