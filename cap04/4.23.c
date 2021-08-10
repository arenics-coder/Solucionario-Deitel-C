#include <stdio.h>
#include <math.h>

int main()
{
   int principal = 100000; //1000x100(cents/pennies)
   double rate = 0.05;

   printf("%4s%21s\n", "Year", "Amount on deposit");

   for(unsigned int year = 1; year <= 10; year++){
	 int amount = principal * pow(1.0 + rate, year);
	 
	 printf("%4u%19d.%02d\n", year, amount/100, amount%100);

   }

   return 0;
}
	   


   
