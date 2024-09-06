#include<stdio.h>

int main(){

    int n[6]={1,2,3,4,5,6};
    int i = 0 , j = 0;
    int n2[6];

    for(i=5; i >= 0;i--){

        n2[j]=n[i];
        j++;
    }

    printf("Tableu Inversion\n");
     for(i=0;i<6;i++){

        printf("%d\t",n2[i]);
    }


    return 0;

}
