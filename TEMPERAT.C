#include<stdio.h>
#include<conio.h>
int main(){
int ft,ct;
printf("enter your temperature");
scanf("%d",&ft);
ct=((ft-32)*5)/9;
printf("the temperature in celcius is %d",ct);
getch();
}