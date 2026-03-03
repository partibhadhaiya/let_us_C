#include<math.h>
#include<stdio.h>
#include<conio.h>
void main()
{ /* program to find table */
/*
  int num,i;
  printf("\nEnter any number\n");
  scanf("\n%d",&num);
  for(i=1;i<=10;i++){
   printf("\n%d*%d=%d",num,i,num*i);
  }
  */
/*program to find table of  i=2+(y+0.5x)*/
/*
int y;
float x,i;
clrscr();
for(y=1;y<=6;y++)
 {
   for(x=5.5;x<12.5; x=x+0.5){
    i=2+(y+(0.5*x));
    printf("\ny||x||i");
    printf("\n%d||%f||%f",y,x,i);
    getch();
    printf("\nEnter any input");
 }
 }
 *//*
 float p,n,q,r,a;
 int i;
 clrscr();
 For(i=1;i<=10;i++){
 printf("Enter pri,q,rate,n resp.");
 scanf("\n%f%f%f%f",&p,&q,&r,&n);
 a=p*(pow((1+(r/q)),(n*q)));
 printf("\n%f",a);
  */



  /*
 int i;
 float c,x,d;
 clrscr();
 printf("Enter any input:\t");
 scanf("%f",&x);
 c=((x-1)/x);
 printf("\n%.2f", c);
 for(i=2;i<=7;i++){
  d=(pow(((x-1)/x),i))/2;
  printf("+%.2f ",d);
  }
 */
 /*pythogorean triplets*/
 /*int i,j,k;
 for(i=1;i<=30;i++){
  for(j=i;j<=30;j++){
   for(k=1;k<=30;k++){
     if(((i*i)+(j*j)==(k*k))){
      printf("\n[%d,%d,%d]",i,j,k);
      }
      }
      }
      }
   */
/*int i,j,k;
int l=1;
clrscr();
for(i=1;i<=4;i++){
  for(j=1;j<=4-i;j++)
  {
  printf("_ ");
  }
for(k=1;k<=i;k++)
{
printf("%d",l);
l++;
if(k<i){
printf("__");
}
}

printf("\n");
}
*/
/*
print 24 hours with suffix am,pm,midnight,noon*/
int time;
for(time=0;time<=24;time++){
if(time==0){
printf("\n%d0:00 Midnight",time); }
 for(time=1;time<=11;time++)
 {
 printf("\n%d:00 AM",time);
 }
 if(time==12){
  printf("\n%d:00 Noon",time);
  }
  for(time=13;time<=23;time++){
   printf("\n%d:00 PM",time);
   }
  }
  getch();
}