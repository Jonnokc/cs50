#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
	float raw_change = 0;
	do {
		printf("how much change is due? ");
		raw_change = GetFloat();
	} while (raw_change < 0);

//printf("%f", change_due);
	float change_due = raw_change;

	float quarter_val = 0.25;
	float dime_val = 0.10;
	float nickel_val = 0.05;
	float penny_val = 0.01;
	int coin_count = 0;



	while (change_due >= quarter_val) {
		coin_count++;
		change_due = (roundf(change_due * 100) - (quarter_val * 100)) / 100;
		//printf("quarter test test = %f\n", roundf(change_due));
	}

	while (change_due >= dime_val) {
		coin_count++;
		change_due = (roundf(change_due * 100) - (dime_val * 100)) / 100;
		//printf("dime test = %f\n", (change_due));
	}

	while (change_due >= nickel_val) {
		coin_count++;
		change_due = (roundf(change_due * 100) - (nickel_val * 100)) / 100;
		//printf("nickel test = %f\n", (change_due));
	}

	while (change_due > 0) {
		change_due = (roundf(change_due * 100) - (penny_val * 100)) / 100;
		coin_count++;
		//printf("penny test = %f\n", roundf(change_due));
	}

	printf("%d\n", coin_count);
//printf("change due is: %f\n", roundf(change_due));



}
