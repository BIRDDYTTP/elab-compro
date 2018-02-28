#include <stdio.h>

int main()
{
	int stamp,discount,stamp_left;
	float amount,total;

	scanf("%d", &stamp);
	scanf("%f", &amount);

	if (stamp == 1){
		discount = 10;
		stamp_left = 0;
	}
	else if (stamp == 2){
		discount = 15;
		stamp_left = 0;
	}
	else if (stamp >= 3 && stamp < 6){
		discount = 20;
		stamp_left = stamp - 3;
	}
	else if (stamp >= 6 && stamp < 9){
		discount = 30;
		stamp_left = stamp - 6;
	}
	else if (stamp >= 9){
		discount = 40;
		stamp_left = stamp - 9;
	}
	else {
		discount = 0;
		stamp_left = 0;
	}
	total = amount * (100-discount)/100;

	printf("You get %d percents discount.\n", discount);
	printf("Total amount due is %.2f Baht.\n", total );
	printf("And you have %d stickers left.", stamp_left );
}