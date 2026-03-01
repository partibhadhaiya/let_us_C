#include<stdio.h>
#include<conio.h>
main(){
int wh,wages;
printf("enter your work hours:");
scanf("%d", &wh);
if (wh==8){
printf("\The wages are 350");
}
else if (wh>8 &&wh<=10){
wages=350+(wh-8)*50;
printf("\nThe wages is %d",wages);
}
else if(wh>10&& wh<=12){
wages=450+(wh-10)*75;
printf("\nThe wages are %d", wages);
}
else if(wh>12&& wh<=14){
wages=600+(wh-12)*100;
printf("\nThe wages are %d",wages);
}
else{
printf("the work hours is not valid");
}
getch();
}


