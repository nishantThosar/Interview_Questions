/*Program to check if the number is prime or not*/

#include <stdio.h>
#include <stdbool.h>


bool prime_check(int);

int main(void)
{
	int input;
	printf("\nEnter a number to check: ");
	scanf("%d", &input);

	if (prime_check(input))
		printf("Is a prime number.\n");
	else
		printf("Is not a prime number.\n");

	return 0;
}//main ends

/*------------------------------ PRIME NUMBER CHECKING FUNCTION ---------------------------------*/
bool prime_check(int n)
{
	int factors = 0;
	if (n <= 1)
	{
		return false;
	}
	if (n <= 3)
	{
		return true;
	}

	for (int index = 1; index <= n; ++index)
	{
		if (n%index == 0)
		{
			factors++;
		}
		if (factors > 2)
		{
			break;
		}
	}
	if (factors == 2)
	{
		return true;
	}
	else
		return false;
}//prime check ends
