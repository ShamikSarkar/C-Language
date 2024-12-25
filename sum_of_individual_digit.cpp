// 2 Write a C program to find the sum of individual digits of a given positive integer.
#include<stdio.h>
int main(){
int number, sum= 0;
printf("Enter the number: ");
scanf("%d",&number);
if(number<=0){
printf("Please enter a positive number");
}
else{
while (number>0)
{
sum+=number%10;
number/=10;
}
}
printf("\nThe sum of the digits is:%d",sum);
return 0;
}