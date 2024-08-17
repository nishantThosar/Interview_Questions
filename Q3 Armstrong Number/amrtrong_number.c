/*Amrtrong_number program
Video link: https://youtu.be/tmXDtb1xhGY?si=PNXLLK6Ucplaty0U
*/
#include <stdio.h>
#include <stdbool.h>

#define DEBUG

int digit_calc(int); //function prototype for counting digits of user input number.
bool is_armstrong(int); //func prototype for checking if the number given is armstrong or not.
int power(int, int);	//function to calculate power of a number

int main(void)
{
	int num; //variable for catching user input number.
	printf("Enter a number: ");
	scanf("%d", &num);

	// printf("returned by function %d \n",digit_calc(num)); //debuggger

	if (is_armstrong(num))
	{
		printf("%d is a armstrong number\n", num);
	}
	else
		printf("%d is not a armstrong number\n", num);

	return 0;
}//main ends

int digit_calc(int number)
{
	int digit_number = 0;
	while(number != 0)
	{
		number = number/10;
		digit_number++;
	}//while ends
	return digit_number;
	// printf("%d\n",digit_number);
}//digit calc

bool is_armstrong(int number)
{
	int squaring = digit_calc(number);
	int sum = 0; //to store the sum of each digit

	int temp = number; //to store the original number, further from here we will use temp insted of number;

	while(temp !=0)
	{
		int digit = temp % 10;

		temp = temp / 10;

		sum += power(digit, squaring);
	}

	return sum == number;
}//is armstrong ends.

int power(int digit, int total_digits)
{
	int result = 1;

	while( total_digits != 0)
	{
		result = result*digit;
		total_digits--;
	}//while ends
	return result;
}//power function ends.
