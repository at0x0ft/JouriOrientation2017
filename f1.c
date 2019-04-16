#include <stdio.h>
#include <string.h>

int modfact(int a)
{
	int tmp = 0;

	if(a >= 2017)
	{
	}
	else
	{
		tmp = a;
		while(1)
		{
			tmp %= 2017;
			a--;
			if(a == 0)
			{
				break;
			}
			tmp *= a;
		}
	}
	return tmp;
}

int main(void)
{
	int t;
	scanf("%d", &t);

	while(t > 0)
	{
		int input;
		scanf("%d", &input);

		input = modfact(input);
		printf("%d\n", input);

		t--;
	}

	return 0;
}