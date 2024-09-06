#include<stdio.h>

int main(){

        int n,s=0,i;
        do
        {
            printf("Entrer un nompre natureals : ");
            scanf("%d",&n);
        } while (n<=0);
        
        for(i=1;i<=n;i++){
            s+=i;
        }
        printf("%d",s);
        


    return 0;
}