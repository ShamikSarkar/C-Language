#include<stdio.h>
int main(){
int a,b,max;
printf("\nEnter first number: ");
scanf("%d",&a);
printf("\nEnter second number: ");
scanf("%d",&b);
if(a>b){
max=a;
}
else{
max=b;
}
printf("\nThe maximum number is %d",max);
return 0;
}