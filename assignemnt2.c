#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){

int a;
int b;
int z;
scanf("%d",&a);
scanf("%d",&b);
z=a+b;
int odd=0;
int even=0;
int rem;
int sum=0;
int flag=0;
while(z>0){
rem=(z%10);
sum+=rem;
z=z/10;
if(flag==0){
odd+=rem;
flag=1;
}
else if(flag==1){
even+=rem;
flag=0;
}
}

printf("%d\n",sum);
printf("%d,%d\n",odd,even);









}
