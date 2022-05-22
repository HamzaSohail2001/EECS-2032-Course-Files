#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){

char input[50];
char output[50];
scanf("%s",&input);
int i;
int j;
int flag=0;
int counter=0;
for(i=0;i<strlen(input);i++){
for(j=0;j<strlen(input);j++){
if(input[i]==input[j] && i!=j){
flag++;
}
if(flag>=3){
input[j];
}
}
if(flag==2){
output[counter]=input[i];
counter++;
flag=0;
}
}

printf("%s\n",output);




}
