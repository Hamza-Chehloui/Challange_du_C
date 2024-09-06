#include<stdio.h>

struct person{

    char nom[50];
    char prenom[50];
    float note[50];

}pers;


int main(){

    int i;
    printf("Entrer le Nom : ");
    scanf(" %[^\n]s",pers.nom);
    printf("Entrer le Prenom : ");
    scanf(" %[^\n]s",pers.prenom);
    for(i=0;i<3;i++){

        printf("Entrer la note %d : ",i+1);
        scanf("%f",&pers.note[i]);

    }
     printf("Nom : %s\n",pers.nom);
     printf("Prenom : %s\n",pers.prenom);
     for(i=0;i<3;i++){

        printf("la note %d: %.2f\n",i+1,pers.note[i]);
    }
   
    return 0;
}