#include<stdio.h>
#define MAXNAME 20
#include<string.h>
typedef struct{
   int hitPoints;
   int strength;
   char name[MAXNAME];
}Hero;

void printHero(Hero hr){
   printf("%s: hitPoints: %d , strength: %d\n", hr.name,hr.hitPoints,hr.strength);
}

void incrementStrength(Hero *hero, int inc){ //strength increment
   hero->strength=hero->strength+inc;
}

void incrementHitPoints(Hero *hero, int inc){ //point increment
   hero->hitPoints=hero->hitPoints+inc;
}

int identical(Hero a, Hero b){ //check if identical
   if(strcmp(a.name,b.name)==0 && a.hitPoints==b.hitPoints && a.strength==b.strength){
       return 1;
   }
   else{
       return 0;
   }

}

int isAlive(Hero h){
   if(h.hitPoints>0){
       return 1;
   }
   else{
       return 0;
   }
}

void fight(Hero *heroA, Hero *heroB)
{
   int heroAstrength=rand()%10+1; //random number for hero A
   int heroBstrength=rand()%10+1;       //random number for hero B

   if(heroAstrength<heroBstrength){
       printf("\n%s %d beats %s %d\n", heroB->name, heroBstrength, heroA->name, heroAstrength);
       incrementHitPoints(heroA, -1); //decrement hit points
   }
   else if(heroBstrength<heroAstrength){
       printf("\n%s %d beats %s %d\n", heroA->name, heroAstrength, heroB->name, heroBstrength);
       incrementHitPoints(heroB, -1);
   }
   else
   {
       printf("Tie");
   }
}

void main() {
   srand( time(NULL) );
   Hero goodGuy = {10, 5, "Frodo" };
   Hero badGuy = { 5, 7, "Grendel" };
   printHero( goodGuy );
   printHero( badGuy );
   while(isAlive(goodGuy) && isAlive(badGuy))
   {
       fight( &badGuy, &goodGuy );
       printHero( goodGuy );
       printHero( badGuy );


   }
   printf("\nFinal Outcome:\n"); //final check hit points
   if(goodGuy.hitPoints>badGuy.hitPoints){
       printf("%s wins!!",goodGuy.name);
   }
   else{
       printf("\n%s wins!!",badGuy.name);
   }


}
