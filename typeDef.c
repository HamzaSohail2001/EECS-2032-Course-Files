#include <stdio.h>
#include <string.h>


typedef struct
{
    /* data */
    char name[25];
    char password[12];
    int id;
}User;

int main(){

User user1 = {"Momina","Hamza786", 1234567};

User user2 = {"Hamza Sohail","Hamza786",218292896};

printf("Here are the details of user 1: %s\n", user1.name);
printf("Here are the details of user 2: %s", user2.name);
}