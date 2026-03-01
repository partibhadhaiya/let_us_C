#include<stdio.h>
#include<conio.h>
main(){
int a,b,c,sum;
printf("\nEnter the three angles of triangles");
scanf("\n%d%d%d",&a,&b,&c);
sum=a+b+c;
if (sum==180){
printf("the triangle is valid");
}
else{
printf("the triangle is not valid");
}
getch();
}
