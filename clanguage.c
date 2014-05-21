#include <stdio.h>

int main(void)
{
	printf("Hello World\n");
	int a = 5, b = ++ a, c = a ++;
	printf("%d,%d\n", b, c);
	return 0;
}
