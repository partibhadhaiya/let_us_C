#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
/*
int num,absolute;
printf("enter any no");
scanf("%d",&num);
if(num<0){
absolute=0-num;
printf("absolute value is %d",absolute);
}
else
{
printf("aboslute value is %d",num);
} */
/*
int l,b,area,peri;
printf("enter length and breadth for rectangle");
scanf("\n%d%d",&l,&b);
area=l*b;
peri=2*(l+b);
if(area>peri){
printf("\narea is large");
}
else{
printf("\nPerimeter is large");
}
*/
/*enter three point or check they are collinear or not*/
/*int x1,y1,x2,y2,x3,y3,m1,m2;
clrscr();
printf("enter three points");
scanf("\n%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x2);
if(m1==m2){
printf("\npoints are collinear");
}
else{
printf("\n Not collinear");
}
*/
/*wap to determine a point lie inside the circle and outside the circle*/
/*int x1,y1,r,d;
clrscr();
printf("\nEnter your point x,y, and radius r resp.");
scanf("%d%d%d",&x1,&y1,&r);
d=sqrt(((x1-0)*(x1-0))+((y1-0)*(y1-0)));
if(d>r){
printf("outside the circle");
}
else{
if(d<r){
printf("inside the circle");
}
else{
printf("at the circle");
}}
*/
/*wap to find the point lie on x axis ,y axis or origin*/
int x,y,d;
printf("enter your points");
scanf("%d%d",&x,&y);
d=sqrt(((x-0)*(x-0))+((y-0)*(y-0)));
if(d==0){
printf("on origin");
}
else{
if(x==0){
printf("on y");
}
else if(y==0)
{
printf("on x-axis");
}
else{printf("on both axis");
}
			   }


getch();
}
