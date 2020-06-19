#include<stdio.h>


int main()
{
	int a =0;
	int n=0;
	
	printf("Enter the n value: \t");
	scanf("%d",&n);
	
	for(int i = 0; i<n;i++)
    {
        if((i%3==0)||(i%5==0))
		{
            a+=i;
        }
        else
        {
            //do nothing
        }

        //printf("Completed -> %d loop\n",i);
    }
    
    printf("\n Sum of all multiples of 3 and 5 within the given limit is %d", a);

	return 0;
}
