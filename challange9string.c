#include<stdio.h>
#include<string.h>

int main(){

    char n[100];
    char n2[100];
    int i, j=0;
    printf("Entre une chine caracteres : ");
    scanf("%[^\n]s",n);
    for(i=0;i<strlen(n);i++){
        if(n[i]!=' '){
            n2[j++]=n[i];
        } 
    }

    printf("Chine resultante : %s",n2);



    return 0;
}