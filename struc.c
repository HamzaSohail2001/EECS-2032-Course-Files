#include <stdio.h>
#include <string.h>


struct Player
{
    /* data */
    char name[24];
    int score;
};

int main(){

struct Player hamza, momina;
strcpy(hamza.name, "Hamza Sohail");
hamza.score = 97;

strcpy(momina.name, "momina mustehsan");
momina.score = 100;


printf("the score for player 1: %d \n",hamza.score);
printf("the score for player 2: %d",momina.score);
}