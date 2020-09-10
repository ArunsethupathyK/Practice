#include<stdio.h>
#include<math.h>

int prime(unsigned long long int a)
{
	static unsigned long long int p=0;
	
	while(a%2==0)
	{
		p=2;
		a=a/2;
	}
	
	for(int i=3;i<=sqrt(a);i=i+2)
		{
			while(a%i==0)
			{							
				p=i;
				a=a/i;											
			}		
		}
	
	if(a>2)
	{
		p=a;
	}
	return p;
}

int main()
{
	unsigned long long int answer=0,n=0;

	
	printf("Enter the number you want to find the largest prime factor:\t");
	scanf("%lld",&n);
	answer=prime(n);

	printf("\nLargest Prime factor is %lld",answer);

	return 0;
}
