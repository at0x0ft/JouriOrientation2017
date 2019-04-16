#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	int i;
	scanf("%d", &t);
	t++;

	while(t > 0) {
		char input[100000];
		gets(input);

		for(i = 0; input[i] != '\0'; i++)
		{
			if((input[i] == 'N' && input[i + 1] == 'P') || ())
			{
				printf("YES\n", t);
				break;
			}
			else if(input[i + 1] == '\0')
			{
				printf("NO\n", t);
			}
		}

		t--;
	}

	return 0;
}