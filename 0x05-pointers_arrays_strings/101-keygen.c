#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Generates random valid passcode
 *Return: always 0
 */
int main(void)
{
	char password[84];
	int a = 0, b = 0, diff_half1, diff_half2;

	srand(time(0));

	while (b < 2772)
	{
		password[a] = 33 + rand() % 94;
		b += password[a++];
	}
	password[a] = '\0';

	if (b != 2772)
	{
		diff_half1 = (b - 2772) / 2;
		diff_half2 = (b - 2772) / 2;

		if ((b -2772) % 2 != 0)
			diff_half1++;

		for (a = 0; password[a]; a++)
		{
			if (password[a] >= (33 + diff_half1))
					{
					password[a] -= diff_half2;
					break;
					}
		}
	}
					printf("%s", password);
					return (0);
}

