#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){              /*
	  int choice,mul=1,n,i,ans=0;
	  clrscr();
	  while(ans==0){
	  printf("\nFactorial:1\n2.Prime\n3.odd\even\n4.exit");
	  printf("\nEnter your choice");
	  scanf("%d",&choice);
	  switch(choice){

	 case 1:
	 printf("\nEnter any number");
	 scanf("\n%d",&n);   mul=1;
	 if(n==0||n==1){
	     printf("factorial is 1");
}

	  for(i=n;i>0;i--)
	     {

	       mul=mul*i;


	     }
	 printf("\nFactorial is %d",mul);   break;
	 case 2:
	     printf("\nEnter a num");
	     scanf("\n%d",&n);
	     i=2;
	     while(i<=n)
	      {
	       if(n%i==0)
		 {
		 break;
		 }
	      i++;
	      }
	      if(n==i)
	      {
		 printf("\n %d is a prime no.",n);
	      }
	      else
	      {
	       printf("\nnot a prime no");
	       }

	       break;
	     case 3:
	       printf("\nEnter a no");
	       scanf("%d",&n);
	       if(n%2==0)
	       {
		printf("\n%d is even",n);
		}
		else
		{
		 printf("\n%d is odd",n);
		 }
		 break;
	       case 4:
		 ans=1;
		 break;
	      }
	      }             */





/*program for grace marks*/
int subject ,ans=0,grace,class;
while(ans==0){
     printf("\nEnter the class(in numeric 1 for first class .2 for second and 3 for third class and subject in which fails");
     scanf("\n%d%d",&class,&subject);
     switch(class)
     {
     case 1 :
     if(subject>3){
     printf("\nNo Grace Marks");
     }
     else{
      grace=subject*5;
      printf("\nGrace marks are %d",grace);
      }
     break;
     case 2:
      if(subject>2){
	 printf("\nNo Grace marks"); }
     else{
     grace=subject*4;
     printf("\nThe grace marks are %d",grace);
     }
     break;
     case 3:
      if(subject==1){
	 grace=subject*5;
	 printf("grace is %d",grace);
	 }
      else
      {
      printf("\nNo grace marks");
      }
     break;

} printf("\nAre you want to continue 0 for continue and 1 for exit");
scanf("%d",&ans);
}






















































































































	      getch();
}
