#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


string get_message(void);
int invalid_key(void);
int get_encrypt(char crypt_val);
int invalid_code(char argv);


int main(int argc, string argv[])
{

	if (argc != 2)
	{
		invalid_key();
		return 1;
	} 
	
	for (int i = 1; i < argc; i++)
	{
	    for (int j = 0, n = strlen(argv[i]); j < n; j++)
	    {
	        char test = argv[i][j];
	        invalid_code(test);
	        
	        if (invalid_code(test) == 1)
	        {
	            printf("You did not enter a valid key\n");
	            return 1;
	        }
	       
	    }
	}
	
	
	
	
	string c_string = (argv[1]);
	int c_length = strlen(c_string);
	int c_pos = 0;
	string message = get_message();



	for (int i = 0, n = strlen(message); i < n; i++)
	{
		if (isalpha(message[i]))
		{
				int adjustment = get_encrypt(c_string[c_pos]);
				int encrypted = message[i] + adjustment;


				if (message[i] >= 'a' && message[i] <= 'z')
				{

					if (encrypted > 122)
					{
						encrypted = (encrypted - 122) + 96;
						printf("%c", encrypted);
					}
					else
					{
						printf("%c", encrypted);
					}
				}
				else if (message[i] >= 'A' && message[i] <= 'Z')
				{

					if (encrypted > 90)
					{
						encrypted = (encrypted - 90) + 64;
						printf("%c", encrypted);
					}
					else
					{
						printf("%c", encrypted);
					}
				}

				c_pos += 1;

				if (c_pos == c_length)
				{
					c_pos = 0;
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

int invalid_code(char argv)
{
	if (isalpha(argv))
	{
	    return 0;
	}
	else
	{
	    return 1;
	    
	}
	
}


int get_encrypt(char crypt_val)
{
	if (crypt_val >= 'a' && crypt_val <= 'z')
	{
		int adjustment = crypt_val - 97;
		return adjustment;
	}
	else
	{
		int adjustment = crypt_val - 65;
		return adjustment;

	}

}
