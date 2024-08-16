/*Prine factor using  Sieve of Eratosthenes */
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
	scanf("%d", &number);
	prime_finder(number);

	return 0;
}

void prime_finder(int n)
{
	int *arr_of_nos =(int *)calloc(n,sizeof(int)); //dynamically creating an array of number.

	for (int i = 2; i <=n; ++i)
	{
		if (arr_of_nos[i] == 0)
		{
			for (int j = i*i; j <= n; j+=i)
			{
				arr_of_nos[j] = 1;
			}//for ends
		}//if ends
	}//for ends

	for (int i = 2; i <= n; ++i)
	{
		if (arr_of_nos[i] == 0)
		{
			printf("%d\t", i);
		}//if ends
	}//for ends
	printf("\n");
}//prime finder ends
