#include <stdio.h>
#include <string.h>
void main(){
int r;
int c;
scanf("%d %d",&r,&c);
char input1[r][c];
char input2[r][c];
int i;
int j;
int count1=0;
int count2=0;
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%s",&input1[i][j]);
}}
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%s",&input2[i][j]);
}}

for(i=0;i<r;i++){
for(j=0;j<c;j++){
if(input1[i][j]>input2[i][j]){
count1++;
}
if(input2[i][j]>input1[i][j]){
count2++;
}
}}
if(count1>count2){
printf("A is greater than B, %d %d\n",count1,count2);
}
if(count2>count1){
printf("B is greater than A, %d %d\n",count2,count1);
}
if(count2==count1){
printf("B is equal to A, %d %d\n",count2,count1);
}

}
