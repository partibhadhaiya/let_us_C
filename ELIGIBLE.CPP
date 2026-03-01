#include<stdio.h>
#include<conio.h>
main(){
int age;
printf("enter your age");
scanf("%d",&age);
if (age>18 && age<45){
printf("eligible");
}
else{
printf("not eligible");
}
getch();
}
