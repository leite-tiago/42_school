
#include <stdio.h>


void f()
{
	static int a;

	a++;
	printf("a: %d\n", a);
}

int main ()
{
	f();
	f();
}

