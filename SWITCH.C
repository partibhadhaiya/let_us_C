#include<stdio.h>
#include<conio.h>
main(){
/*
int num,rev=0,d,temp;
printf("\nEnter a no.\n");
scanf("%d",&num);
while(num>0){
d=num%10;
if(d==0){
temp==d;
}
else{
rev=rev*10+d; }
num=num/10;
}
while(rev>0){
d=rev%10;
if(temp==0){
d=0;}
switch(d){
case 0:
 printf("\nZero");
 break;
case 1:
 printf("\nOne");
 break;
case 2:
printf("\ntwo");
break;
case 4:
 printf("\nfour");
 break;
case 3:
 printf("\nthree");
 break;
case 5:
 printf("\nFive");
 break;
case 6:
 printf("\nSix");
 break;
case 7:
printf("\nSeven");
break;
case 8:
printf("\nEight");
break;
default:
 printf("\nnine");
 break;
 }
 rev=rev/10;
 }

*/
/*Enter a character and check is it vowel or consonant
*/
char ch;
printf("enter any character");
scanf("%ch",&ch);
ch=ch>=65&&ch<=90?ch+32:ch;
switch(ch){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("\nvowel");
break;

default:
printf("\nConsonant");
break;
}


getch();
}