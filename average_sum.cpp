// Write a C program to find the sum and average of three numbers.
#include<stdio.h>
int main(){
float a,b,c,res;
float avg;
printf("Enter first number: ");
scanf("%f",&a);
printf("Enter second number: ");
scanf("%f",&b);
printf("Enter third number: ");
scanf("%f",&c);
res=a+b+c;
avg=res/3;
printf("\nThe sum of %.2f,%.2f and %.2f is %.2f",a,b,c,res);
printf("\nThe average of %.2f,%.2f and %.2f is %.2f",a,b,c,avg);
return 0;
}