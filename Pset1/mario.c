#include <cs50.h>
#include <stdio.h>


int main(void)
{

	int pyramid_height = 0;

	do {
		printf("Enter the height of the pyramid!\n");
		pyramid_height = GetInt();
	} while (pyramid_height < 0 || pyramid_height > 23);


	for (int i = 0; i < pyramid_height; i++) {

		for (int j = pyramid_height; j > i + 1; j--) {
			printf(" ");
		}
		for (int k = i; k > 0; k--) {
			printf("#");
		}
		printf("##\n");
	}

}
