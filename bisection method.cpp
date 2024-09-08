#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) x*x*x-3*x-5

int main()
{
	 float x0, x1, x2, f0, f1, f2, e;
	 
	 
	
	 up:
	 printf("\nEnter two initial guesses:\n");
	 scanf("%f%f", &x0, &x1);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	
	 f0 = f(x0);
	 f1 = f(x1);
	
	 if( f0 * f1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  goto up;
	 }
 
	do
	 {
		  x2 = (x0 + x1)/2;
		  f2 = f(x2);
		
		 
		
		  if( f0 * f2 < 0)
		  {
			   x1 = x2;
			   f1 = f2;
		  }
		  else
		  {
			   x0 = x2;
			   f0 = f2;
		  }
		 
	 }while(fabs(f2)>e);
	 printf("\nRoot is: %f", x2);
	 getch();
}