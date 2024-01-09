/* CS 153 PROGRAM ASSIGNMENT #6
 Dice Game
 Erik Marrero
 10/21/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUFFSIZE 132

char input[BUFFSIZE];
int rolls=0;
int throwDie(){
    static int initialized = 0;
    if ( !initialized ){
        srand( time(NULL) );
        initialized = 1;
    }
    return rand()%6 + 1 ;
}
int humanTurn(){

    char choice;
    int toss,humanTotal=0,rollagain=1;
    while(rollagain){
        toss = throwDie();
        humanTotal += toss;
        rolls++;
        printf("You throw a %d\n", toss );
        printf("Do you wish to throw again? [Y or N] :");
        scanf(" %c",&choice);
        if(choice=='N'){
            rollagain=0;
        }

    }
    printf("Your score is %d\n",humanTotal);
    return humanTotal;
}
int computerTurn(){

    int i,toss,computer_total=0;
    for(i=0;i<rolls;i++){
        toss=throwDie();
        computer_total += toss;
        printf("\nComputer throws a %d", toss );
    }
    rolls=0;
    printf("\nComputer's score is %d\n",computer_total);
    return computer_total;
}

int main(int argc, char *argv[]){
    int round, human_wins_count=0, computer_wins_count=0;
    int humanToss, computerToss;
    const int total_rounds = 7;


    for ( round = 1; round<=total_rounds; round++ ){
        printf("\nRound %d\n\n", round );
        printf("Player 1's Turn: (hit enter)");
        fgets( input, BUFFSIZE, stdin );
        humanToss = humanTurn();

        printf("\nComputer's Turn: (hit enter)");
        fgets( input, BUFFSIZE, stdin );
        computerToss = computerTurn();

        if ( humanToss > computerToss ){
            human_wins_count++;

            printf("\nHuman wins the round.    human:%3d. computer: %3d\n",
                human_wins_count, computer_wins_count );

        }
        else if ( computerToss >= humanToss ){
            computer_wins_count++;
            printf("\nComputer wins the round. human:%3d. computer: %3d\n",
                human_wins_count, computer_wins_count );


        }
    }
    if (human_wins_count > computer_wins_count){
        printf("\n\nHuman Wins the Game!\n");
    }
    else {
        printf("\n\nComputer Wins the Game!\n");
    }

    printf("\n");
    return 0;
}
