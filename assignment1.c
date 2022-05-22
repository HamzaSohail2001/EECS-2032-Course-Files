#include <stdio.h>

void main(){
char text[100];
int i=0;
int flag=0;
scanf("%s",&text);

while(!(text[i] == 'z' && text[i+1] =='z')){
i++;
if(i==50){
printf("NO zz \n");
flag=1;
break;
}
}
if(flag==0){
printf("%d\n",i);
}
}
