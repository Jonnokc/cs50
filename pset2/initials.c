#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

string User_Name(void);

int main(void)
{
	string name = User_Name();

	printf("%c", toupper(name[0]));

	for (int i = 0; i < strlen(name); i++)
	{
		if (name[i] == ' ')
		{
			char initial = name[i+1];
			printf("%c", toupper(initial));
		}
	}
	printf("\n");
}

string User_Name(void)
{
	string name = GetString();
	return name;
}

