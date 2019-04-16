#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	while(t-- > 0) {
		int a;
		scanf("%d", &a);
		printf("%d\n", 4 - a%4);
	}
	return 0;
}