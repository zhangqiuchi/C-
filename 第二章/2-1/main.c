#include <stdio.h>
#include "increment.c"
#include "negate.c"

int main(void)
{
	printf("%d %d\n", increment(10), negate(10));
	printf("%d %d\n", increment(0), negate(0));
	printf("%d %d\n", increment(-10), negate(-10));
	return 0;
}
