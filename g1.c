#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, m, l;
	scanf("%d %d %d", %n, %m, %l);

	while(t-- > 0)
	{
		count = 0;
		char input[100000];
		gets(input);

		scanf("%d %d", %p, %q);
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