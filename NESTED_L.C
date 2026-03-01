#include<stdio.h>
#include<conio.h>
main()
{
/*
int i,j;
clrscr();*/
/*print:
*
**
***
****
*/
/*
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");

}
*/

/*2. print:
1
1 2
1 2 3
1 2 3 4
*/

/*
for (i=1;i<=5;i++)
{
for (j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}*/

/*print:
1
22
333
4444
55555
*/
/*
for(i=1;i<=5;i++)
{
 for(j=1;j<=i;j++)
  {
    printf("%d",i);
  }
  printf("\n");
}
*/

/*print:
1
21
321
4321
54321
*/
/*
for(i=1;i<=5;i++)
{
for(j=i;j>=1;j--)
{
printf("%d",j);
}
printf("\n");
}
*/
/*print:
5
54
543
5432
54321
*/
/*
for(i=1;i<=5;i++){
for(j=5;j>=6-i;j--)
{
printf("%d",j);
}
printf("\n");
}
*/


/*
print:
*****
****
***
**
*
*/
/*
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
printf("*");
}
printf("\n");
}
*/


/*
print:
5
44
333
2222
11111
*/
/*
for(i=5;i>=1;i--){
for(j=5;j>=i;j--)
{
printf("%d",i);
}
printf("\n");
}
*/

/*
print:
1
23
456
78910
*/
/*
int i,j;
int k=1;
for(i=1;i<=5;i++)
{
for(j=1;j<i;j++)
{
 printf("%d",k);
 k++;
 }
 printf("\n");
}
*/


/*printf:
____*
___*_*
__*_*_*
_*_*_*_*
*_*_*_*_*

*/
/*
int i,j,k;
for (i=1;i<=5;i++)
{
 for(j=1;j<=5-i;j++)
 { printf("_");}

  for(k=1;k<=i;k++){
  printf("*");
  if(k<i){
  printf("_");
  }

  }

  printf("\n");
  }
*/
/*
printf:
_____1
___121
__12321
_1234321
123454321
*/
int i,j,k;
for(i=1;i<=5;i++){
for(j=1;j<=5-i;j++)
{
printf("_");
}
for(k=1;k<=i;k++)
{
printf("%d",k);

}
if(k>=i){
for(k=i-1;k>=i;k--){
printf("%d",k);
}}
printf("\n");
}

getch();


}