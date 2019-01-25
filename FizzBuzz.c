#include <stdio.h>

int main (void)
{
	int n;
	for ( n=1; n<=100; n++)
{
	if(((n%3)||(n%5))==0)
		printf("Solution= %d FizzBuzz\n", n);
	else if((n%3)==0)
		printf("Solution= %d Fizz\n", n);
	else if ((n%5)==0)
		printf("Solution= %d Buzz\n", n);
	else
		printf("Solution= %d\n",n);

}
	return 0;
}

