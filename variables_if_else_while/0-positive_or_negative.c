#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	int lastDigit=n%10;

	if(lastDigit>5){
	
		printf("and is greater than 5")
	}
	else if(lastDigit==0){
	
		printf("and is 0")
	}
	else if(lastDigit<6 && lastDigit!=0){
	printf("and is less than 6 and not 0")
	}
	return (0);
}