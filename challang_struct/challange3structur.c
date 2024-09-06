#include<stdio.h>
struct recto{

    float larguer;
    float longueur;
}rec;

float rectangle(){

        float rus;
        rus=rec.larguer*rec.longueur;
        return rus;

}

int main()
{
    printf("Entere larguer : ");
    scanf("%f",&rec.larguer);
    printf("Entrer longueur : ");
    scanf("%f",&rec.longueur);

    printf("%.2f",rectangle());

    return 0;
}