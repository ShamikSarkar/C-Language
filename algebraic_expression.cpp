#include<stdio.h>
#include<math.h>
int main(){
float res,a,b,x;
printf("Enter value of a: ");
scanf("%f",&a);
printf("\nEnter value of b: ");
scanf("%f",&b);
printf("\nEnter value of x: ");
scanf("%f",&x);
float case1=(a*x+b);
float case2=(a*x-b);
if(case2!=0){
res=case1/case2;
printf("\nThe reqired result is: %.2f",res);
}
else{
printf("\nError");
}
return 0;
}