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

User user2 = {"Hamza Sohail","Hamza786", 218292896};

printf("Here are the details of user 1: %s and their ID: %d \n", user1.name, user1.id);
printf("Here are the details of user 2: %s and their ID %d", user2.name, user2.id);

}