/*Prime Number finder in a range using  Sieve of Eratosthenes */
//program to find prime factor till a given number by user.
//video link: https://youtu.be/nDPo9hsDNvU?si=PmT3vaXleUPzFcUL

//Name: Nishant Thosar
//Date: Aug 16 2024
//Place: Pune

#include <stdio.h>
#include <stdlib.h>

void prime_finder(int);//func prototype

int main(int argc, char const *argv[])
{	
	int number = 0;
	printf("\nEnter a number: ");	
	scanf("%d", &number); //catching number till which we want to find the prime number.
	prime_finder(number);

	return 0;
}

/*PRIME  NUMBER FINDER function 
In this function first we are creating an array of the size of which the user has entered a number.
Then first number is picked up and all its squares are set to 1 in array.
Then the 2nd (next number) is picked and all its quares are also set to 1 in the array
After that we just print value of I for those values of array which are assigned to 0 as those are the prime numbers*/
void prime_finder(int n)
{
	int *arr_of_nos =(int *)calloc(n+1,sizeof(int)); //dynamically creating an array of number.

	for (int i = 2; i*i <= n; i++) //starting probing from 2.
	{
		if (arr_of_nos[i] == 0) //checking if already the number is a square of some other number or not.
		{
			for (int j = i*i; j <= n; j += i) //for jumping to the squares
			{
				arr_of_nos[j] = 1; //initilizaion of array element to 1 if the square is found.
			}//for ends
		}//if ends
	}//for ends

//for printing the array.
	for (int i = 2; i <= n; ++i)
	{
		if (arr_of_nos[i] == 0)
		{
			printf("%d\t", i);
		}//if ends
	}//for ends
	printf("\n");
	free(arr_of_nos);
}//prime finder ends
