#include <stdio.h>

int main(int argc, char *argv)
{
	int t;
	scanf("%d", &t);

	while(t-- > 0) {
		int a, b;
		int answer = 0; // EDIT HERE

		scanf("%d %d", &a, &b);
		answer = a + b;
		printf("%d\n", answer);
	}
	return 0;
}