#include<stdio.h>
#include<conio.h>
main()
{
int x1,y1,x2,y2,x3,y3,m1,m2;
printf("\nEnter your three point (x1,y1),(x2,y2),(x3,y3)");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
m1=(y2-y1)/(x2-x1);
m2=(y3-y2)/(x3-x1);
if(m1==m2){
printf("\nThe points are fall in same line");
}
else{
printf("\nThe points are fall in same line");
}
getch();
}
