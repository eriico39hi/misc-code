/*
 * int_reversal.c
 * Eric Craaybeek
 * 
 * Description: Reads an int from keyboard and reverses the order of the digits.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Declare Vars
	int num;
	int rev = 0;
	
	//Read in number
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("You typed %d\n",num);
	
	//Number reversal
	while (num != 0)
	{
		rev = rev + num % 10;
		num = num - num % 10;
		rev *= 10;
		num /= 10;
	}
	rev = rev / 10;
	
	//Print the reverse
	printf ("Its reverse is %d \n", rev);
	
	return 0;
}

