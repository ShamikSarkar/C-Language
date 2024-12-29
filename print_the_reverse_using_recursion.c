#include<stdio.h>
void reverse_number(int n){
if (n==0)
{
return;
}
else{
printf("%d",n%10);
reverse_number(n/10);
}
}
int main(){
int num;
printf("Enter an integer: ");
scanf("%d",&num);
if(num<0){
printf("-");
num=-num;
}
printf("The reverse of the number is: ");
if(num==0)
printf("0");
reverse_number(num);
printf("\n");
return 0;
}