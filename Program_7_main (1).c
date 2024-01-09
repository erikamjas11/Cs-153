/* CS 153 PROGRAM ASSIGNMENT #6
 Histogram
 Erik Marrero
 10/37/2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int histogram[61];
int throwDie(){
return 1+ rand()%6;
}
int throwNDice( int n){
int total =0;
int i;
for(i=1;i<=n;i++){
total += throwDie();
}
return total;
}
void printHisto(int maxThrow){
printf("throw | count\n");
printf("------+------\n");
int index; double total =0;
for(index=0;index<=maxThrow;index++){
printf("%5d%7d\n",index,histogram[index]);
total+= index*histogram[index];
}
}
int main(){
srand(time(NULL));
int dice=0; int throws=0;
printf("How many dice: "); scanf("%d", &dice);
printf("Minimum throw: %d\n",dice);
printf("Maximum throw: %d\n",dice*6);
printf("Average throw: %.2f\n", (dice+dice*6)/2.0);
printf("How many throws: ");scanf("%d",&throws);

int count=1;
int roll =0;
for(count=1;count<=throws;count++){
roll = throwNDice(dice);
histogram[roll]+=1;
}
printHisto(dice*6);
int index; double total =0;
for(index=0;index<=dice*6;index++){
total+= index*histogram[index];
}
printf("Average throw for this run:\n%.2f",total/throws);
}
