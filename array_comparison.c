#include <stdio.h>
void main(){
int r;
int c;
int i;
int j;
int flag1=0;
int flag2=0;

scanf("%d %d",&r,&c);
int input1[r][c];
int input2[r][c];
int counter1[r];
int counter2[r];

for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&input1[i][j]);
counter1[i]+=input1[i][j];
}
}
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&input2[i][j]);
counter2[i]+=input2[i][j];
}
}
for(i=0;i<r;i++){
for(j=0;j<c;j++){
if(input1[i][j]>input2[i][j]){
flag1=1;
}
if(input1[i][j]<input2[i][j]){
flag2=1;
}
}
}
if(flag1==1 && flag2==0){
printf("YES\n");
}
if(flag1==0 && flag2==1){
printf("NO\n");
}





}
