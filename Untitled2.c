#include<stdio.h>
void main()
{
int Headache,Chills,Fever,Fatigue,Vomitting,Musclepain,Diarrhea,Cough,Abdominalpain,Bleeding,Rapidbreathing,Skinrash;
int denguescore=0,malariascore=0;
printf("(Enter 1 for Yes,0 for No)\n\n");
printf("Do you have  Headache?: ");
scanf("%d",&Headache);
printf("Do you have  Chills?: ");
scanf("%d",&Chills);
printf("Do you have  Fever?: ");
scanf("%d",&Fever);
printf("Do you have Fatigue?: ");
scanf("%d",&Fatigue);
printf("Do you have Musclepain?: ");
scanf("%d",&Musclepain);
printf("Do you have Diarrhea?: ");
scanf("%d",&Diarrhea);
printf("Do you have Cough?: ");
scanf("%d",&Cough);
printf("Do you have Vomitting?: ");
scanf("%d",&Vomitting);
printf("Do you have Abdominalpain?: ");
scanf("%d",&Abdominalpain);
printf("Do you have Rapidbreathing?: ");
scanf("%d",&Rapidbreathing);
printf("Do you have Skinrash?: ");
scanf("%d",&Skinrash);
printf("Do you have Bleeding?: ");
scanf("%d",&Bleeding);

if(Headache)
    {malariascore=malariascore+1;
    denguescore=denguescore+1;}
if(Chills)
    {malariascore=malariascore+1;
    denguescore=denguescore+1;}
if(Fever)
    {malariascore=malariascore+1;
    denguescore=denguescore+1;}
if(Fatigue)
    {malariascore=malariascore+1;
    denguescore=denguescore+1;}
if(Musclepain)
    malariascore=malariascore+1;
if(Diarrhea)
    malariascore=malariascore+1;
if(Cough)
    malariascore=malariascore+1;
if(Vomitting)
    {malariascore=malariascore+1;
    denguescore=denguescore+1;}
if(Abdominalpain)
    denguescore=denguescore+1;
if(Rapidbreathing)
    denguescore=denguescore+1;
if(Skinrash)
   denguescore=denguescore+1;
if(Bleeding)
    denguescore=denguescore+1;

if(malariascore>=5&&denguescore>=5)
    printf("You have a high chance to have both Malaria and Dengue. Consult a doctor immediately");
else if(malariascore>=5)
    printf("You have a high chance of having Malaria.");
else if(denguescore>=5)
    printf("You have a high chance of having Dengue.");
else if((malariascore>=2&&malariascore<5)&&(denguescore>=2&&denguescore<5))
    printf("You have certain symptoms of both Malaria and Dengue. Consult a doctor immediately.");
else if(malariascore>=2&&malariascore<5)
    printf("You have certain symptoms of Malaria. Please take care of yourself.");
else if(denguescore>=2&&denguescore<5)
    printf("You have certain symptoms of Dengue. Please take care of yourself.");
else
    printf("You are healthy");
}
