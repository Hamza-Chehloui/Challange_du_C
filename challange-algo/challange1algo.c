#include<stdio.h>

int main(){

    int taille=6,i,j,tmp;
    int t[]={20,12,10,35,25,0};
     printf("\n Avants\n");
    for(i=0;i<taille;i++){

        printf("%d ",t[i]);
    }

    for(i=0;i<taille-1;i++){

        for(j=0;j<taille-i-1;j++){
            if(t[j]>t[j+1]){

                    tmp=t[j];
                    t[j]=t[j+1];
                    t[j+1]=tmp;
            }
        }
    }
    printf("\n Apres\n");
     for(i=0;i<taille;i++){

        printf("%d ",t[i]);
    }




    return 0;
}