#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int my_add(int a,int b)
{
     return a+b;
}
int my_sub(int a,int b)
{
   return (a>b)?(a-b):(b-a);
}
int my_mux(int a,int b)
{
    return a*b;
}
double my_div(int a,int b)
{
    if(b==0)
    {
        printf("b==0\n");
        exit(0);
    }
    double d=a*1.0/b;
    return d;
}
/*int my_mod(int a,int b)
{
	if(a>=b)
	{
	int c=int(my_div(a,b));
	return a-b*c;
	}
	else
	{
		int c=int(my_div(b,a));
		return b-a*c;
	}
}*/

