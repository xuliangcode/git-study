#include <stdio.h>

static union {
	char c[4];
	unsigned int l;
}endia_test = {'l', '?', '?', 'b'};


int main(void)
{
	printf("This machine is %c \n", (char)endia_test.l);
}
