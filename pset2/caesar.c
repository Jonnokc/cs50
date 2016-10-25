#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


string get_message(void);
int invalid_key(void);


int main(int argc, string argv[])
{

	if (argc != 2)
	{
		invalid_key();
		return 1;
	}
	int k = atoi(argv[1]);
	string message = get_message();

	for (int i = 0, n = strlen(message); i < n; i++)
	{
		int result = (message[i] + k);
		int hold = k % 26;

		if (message[i] >= 'a' && message[i] <= 'z')
		{

			int checking = message[i] + hold;

			if (checking > 122)
			{
				message[i] = (checking - 122) + 96;
				printf("%c", message[i]);
			}
			else
			{
				printf("%c", checking);
			}

		}
		else if (message[i] >= 'A' && message[i] <= 'Z')
		{

			if (result > 90)
			{
				message[i] = (result - 90) + 64;
				printf("%c", message[i]);
			}
			else
			{
				message[i] = result;
				printf("%c", message[i]);
			}
		}
		else
		{
			printf("%c", message[i]);
		}
	}
	printf("\n");
}



string get_message(void)
{
	string message = GetString();
	return message;
}


int invalid_key(void)
{
	printf("You did not enter a valid key\n");
	return 1;
}
