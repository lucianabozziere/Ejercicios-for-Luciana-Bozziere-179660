#include<stdio.h>
#include<math.h>

int main()
{
 int a;
 int sum=0;
 float b;

 for (a=1;a<=100;a++)
   {
   	 b=pow(a,2);
   	 sum+=b; 
   }
   printf("suma de los cuadrados de los primeros 100 numeros es:%d", sum);
   return 0;
}
