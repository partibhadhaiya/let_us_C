#include<stdio.h>
#include<conio.h>
int main(){
int wh, wages,i;
wages=350;
printf("\n Enter your works hours");
scanf("%d", &wh);
if(wh==8){
printf("\n The wages for 8 hours is :%d",wages);
}
else if (wh>8 && wh<=10){
for(i=8;i<wh;i++)
{ wages=wages+50;
}

printf("\nthe wages are: %d",wages);
}
else if(wh>10 && wh<=12){
for(i=10;i<wh;i++){
wages=wages+75;
}
wages=wages+100;
printf("\nthe wages are %d",wages);
}
else if(wh>12 && wh<=14)
{
for(i=12;i<wh;i++){
wages=wages+100;
}

wages=wages+100+150;
printf("\nthe wages are%d",wages);
}
else{
printf("\nthe values are invalid");
}





getch();

}
