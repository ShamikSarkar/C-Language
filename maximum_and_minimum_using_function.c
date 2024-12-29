#include<stdio.h>
int find_max(int a, int b){
if(a>b){
return a;
}
else{
return b;
}
}
int find_min(int a, int b){
if(a<b){
return a;
}
else{
return b;
}
}
int main(){
int num1,num2,max,min;
printf("enter two numbers: ");
scanf("%d %d",&num1,&num2);
max=find_max(num1,num2);
min=find_min(num1,num2);
printf("Maximum:%d\n",max);
printf("Minimum:%d\n",min);
return 0;
}