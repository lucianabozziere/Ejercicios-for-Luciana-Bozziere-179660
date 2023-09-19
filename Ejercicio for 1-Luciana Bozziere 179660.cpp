/*sucesion de numeros*/
#include<stdio.h>
int main()
{
 int a;
 int num;

printf("Hasta que numero quiere la sucesion?");
scanf("%d", &num); 

for (a=1;a<=num;a++)
   {
      printf("%d\t",a);
      printf("%d\t",-a);
   }
   return 0;
}
