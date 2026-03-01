#include<stdio.h>
#include<conio.h>
main(){
int len,br,radius,rectArea,rectPerimeter;
float areaCircle, areaCircum;
printf("\nEnter your len,br,and radius respectively");
scanf("%d%d%d",&len,&br,&radius);
rectArea=len*br;
rectPerimeter=2*(len+br);
printf("the area and perimerter of rectangle are respectively %d and%d ",rectArea,rectPerimeter);
areaCircle=(22*radius*radius)/7;
areaCircum=(2*22*radius)/7;
printf("the area and perimeter of circle is %f and %f respectively",areaCircle,areaCircum);


getch();
}
