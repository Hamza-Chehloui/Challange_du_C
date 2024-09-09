#include<stdio.h>

int main(){


    int jo,m,a;
        printf("Entrer le joure : ");
        scanf("%d",&jo);
        printf("Entrer le mois : ");
        scanf("%d",&m);
        printf("Entrer le annes : ");
        scanf("%d",&a);


        if(jo>31||jo<1||m>12||m<1)
        {

            printf("imposiple");
        }
       else if(jo<31&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
        {
            jo++;
            printf("%d / %d / %d ",jo,m,a);
        }
        else if (jo<31&&(m==4||m==6||m==9||m==11))
        {
            jo=1;
            m++;
            printf("%d / %d / %d ",jo,m,a);
        }
        else if(m==12&&jo==31)
        {
            jo=1;
            m=1;
            a++;
        }
        else if(m==2)
        {
            if((a%4==0&&a%100!=0)||(a%400==0))
            {
                if(jo<29)
                {
                    jo++;
                    printf("%d / %d / %d ",jo,m,a);

                }
                 else if(jo>29)
                 {
                    printf("nooo\n");
                 }
                else
                {
                    m++;
                    jo=1;
                    printf("%d / %d / %d ",jo,m,a);
                }
            }
            else
            {
                if(jo<28)
                {
                    jo++;
                    printf("%d / %d / %d ",jo,m,a);

                }
                 else if(jo>=29)
                 {
                    printf("nooo\n");
                 }
                 else
                {
                    m++;
                    jo=1;
                    printf("%d / %d / %d ",jo,m,a);
                }
            }
        }
        else
        {
            jo=1;
            m++;
            printf("%d / %d / %d ",jo,m,a);
        }
        



        return 0;


}