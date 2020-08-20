#include<stdio.h>

int main()
{
	unsigned int temp=0;
	unsigned int i=0,j=1,k=0,n=0;
	
	printf("Enter the number you want to find the largest prime factor:\t");
	scanf("%d",&n);
	printf("\n Factors are :");
	k=n;
	while((k)!=0)
	{
		if(n%k==0)
		{
			temp=k;
			while((temp)!=0)
			{
				if(k%temp==0)
				{		
					printf("\n %d",temp);
				}
				temp--;
			}
			//printf("\n %d",k);
		}
		k--;
	}
	//printf("\nSum is %d",sum);
//	printf("\nSum of even numbers is %d",evenSum);
	return 0;
}
