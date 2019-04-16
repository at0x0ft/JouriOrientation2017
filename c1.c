#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	int i, count = 0;
	scanf("%d", &t);

	while(t-- > 0) {
		count = 0;
		char input[100000];
		gets(input);

		for(i = 0; input[i] != '\0'; i++)
		{
			if(input[i] == '.')
			{
				count++;
			}
		}
		for(i = 0; input[i] != '\0'; i++)
		{
			if(i < count)
			{
				input[i] = '.';
			}
			else
			{
				input[i] = 'o';
			}
		}
		printf("%s\n", input);
	}
	return 0;
}