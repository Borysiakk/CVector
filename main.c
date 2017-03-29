#include <stdio.h>

#include "Vector.h"


int main()
{
	vector vec = CreateVector();
	reserve(&vec, 3);
	push_back(&vec, (int*)5);
	push_back(&vec, (int*)10);
	push_back(&vec, (int*)15);
	push_back(&vec, (int*)20);

	int a = (int)at(&vec, 0);
	int b = (int)at(&vec, 1);
	int c = (int)at(&vec, 2);
	int d = (int)at(&vec, 3);

	printf("%i\n",a);
	printf("%i\n",b);
	printf("%i\n",c);
	printf("%i\n",d);

	DestroyVector(&vec);
	getchar();
}
