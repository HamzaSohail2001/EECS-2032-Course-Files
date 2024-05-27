#include <stdio.h>
#include <string.h>

void main(){

char input[100];
char output[100];
scanf("%[^\n]s",&input);
int y=strlen(input);
int z=y/2;
int i;
int counter=0;
for(i=z-1;i>-1;i--){
if(input[i]!=' '){
output[counter]=input[i];
counter++;
}
}
for(i=z;i<strlen(input);i++){
if(input[i]!=' '){
output[counter]=input[i];
counter++;
}
}
printf("%s\n",output);





}
