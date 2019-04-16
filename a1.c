#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);

	while(t-- > 0) {
		int a, b, c;
		int answer = 0; // EDIT HERE

		scanf("%d %d %d", &a, &b, &c);
		answer = 3 * a +  2 * b + c;
		printf("%d\n", answer);
	}
	return 0;
}