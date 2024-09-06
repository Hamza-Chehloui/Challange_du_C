#include<stdio.h>
#include<string.h>

int main(){

char n[100],n2[50];
printf("Entrer une chine principal : ");
scanf(" %[^\n]s",n);
printf("Entere une chine presente : ");
scanf(" %[^\n]s",n2);
if(strstr(n,n2)){

    printf("une chine est trouvee ");
}
else
{
    printf("une chine Non trouvee ");
}



    return 0;
}