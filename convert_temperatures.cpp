#include<stdio.h>
void celciusTofahrenheit(){
float fahrenheit,celcius;
printf("\nPlease enter the temparature in celcius: ");
scanf("%f",&celcius);
fahrenheit=(9*celcius+160)/5;
printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celcius, fahrenheit);
}
void fahrenheitTocelcius(){
float fahrenheit,celcius;
printf("\nPlease enter the temparature in fahrenheit: ");
scanf("%f",&fahrenheit);
celcius=(5*fahrenheit-160)/9;
printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celcius);
}
int main(){
int choice;
printf("1 -> Convert Celcius to Fahrenheit\n");
printf("2 -> Convert Fahrenheit to Celcius");
printf("\nPlease enter your choice(1/2): ");
scanf("%d",&choice);
if(choice==1){
celciusTofahrenheit();
}
else if (choice==2)
{
fahrenheitTocelcius();
}
else{
printf("\nInvalid Option Choose!");
}
return 0;
}