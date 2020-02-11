#include <stdio.h>
#include <math.h>
int main()
{
	 float a, b;
	 printf("Enter a value for a ");
	 scanf("%f", &a);
	 printf("Enter a value for b ");
         scanf("%f", &b);
         printf("%.2f + %.2f = %.2f\n", a,b, a+b);
         printf("%.1f - %.1f = %.1f\n", a,b, a-b);
         printf("%f to the %f power = %f\n", a,b, pow(a,b));
	 printf("Square root of %f is %f\n", a, sqrt(a));
	 return 0;
}

