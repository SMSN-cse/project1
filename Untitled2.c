#include<stdio.h>
#include<math.h>

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
    {
    malariascore++;
    denguescore++;
    }
if(Chills)
    {
    malariascore++;
    denguescore++;
    }
if(Fever)
    {
    malariascore++;
    denguescore++;
    }
if(Fatigue)
    {
    malariascore++;
    denguescore++;
    }
if(Musclepain)
    malariascore++;
if(Diarrhea)
    malariascore++;
if(Cough)
    malariascore++;
if(Vomitting)
    {
    malariascore++;
    denguescore++;
    }
if(Abdominalpain)
    denguescore++;
if(Rapidbreathing)
    denguescore++;
if(Skinrash)
   denguescore++;
if(Bleeding)
    denguescore++;

if(abs(malariascore-denguescore)<2)
    printf("\nSymptoms overlap for both Malaria and Dengue. Please consult a doctor.\n");
else if(malariascore>denguescore)
  {
   if(malariascore>=5)
    printf("\nYou have a high chance of having Malaria.\n");
   else if(malariascore>=2&&malariascore<5)
    printf("\nYou have certain symptoms of Malaria. Please take care of yourself.\n");
  }
else if(denguescore>malariascore)
  {
   if(denguescore>=5)
    printf("\nYou have a high chance of having Dengue.\n");
   else if(denguescore>=2&&denguescore<5)
    printf("\nYou have certain symptoms of Dengue. Please take care of yourself.\n");
  }
 else if((malariascore>=2&&malariascore<5)&&(denguescore>=2&&denguescore<5))
    printf("\nYou have certain symptoms of both Malaria and Dengue. Consult a doctor immediately.\n");
 else
    printf("\nYou are healthy\n");
}
