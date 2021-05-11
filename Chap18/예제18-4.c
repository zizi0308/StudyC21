#include <stdio.h>

int main(void)
{
	/*int ch;

	while (1)
	{
		ch = getchar();
		if (ch == -1)
		{
			break;
		}
		putchar(ch);
	}*/
	int ch;

	while (1)
	{
		ch = fgetc(stdin);
		if (ch == -1)
		{
			break;
		}
		fputc(ch, stdout);
	}

	return 0;
}