#include "prime.h"

int isPrime(int num)
{
	int i;
	if(num<=i)
		return 0;
	for(i=2;i<num;i++)
	{
		if(num&i==0)
			return 0;
	}
	return 1;
}