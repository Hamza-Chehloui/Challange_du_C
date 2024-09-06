#include<stdio.h>

struct person{

    char nom[50];
    char prenom[50];
    int age;

}pers;

int main(){

    printf("Entrer le Nom : ");
    scanf(" %[^\n]s",pers.nom);
    printf("Entrer le Prenom : ");
    scanf(" %[^\n]s",pers.prenom);
    printf("Entrer le Age : ");
    scanf("%d",&pers.age);

    printf("Nom : %s\n",pers.nom);
    printf("Prenom : %s\n",pers.prenom);
    printf("Age : %d\n",pers.age);



    return 0;
}