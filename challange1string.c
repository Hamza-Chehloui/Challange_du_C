#include<stdio.h>

int main(){

    char a[100];
    printf("Entre le message : \n");
    scanf("%[^\n]s",a);
    printf("%s",a);


    return 0;

}
