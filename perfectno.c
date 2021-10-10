#include <stdio.h>

	int main(void)
	{
		int n,i,sum,j;
		printf("Enter the value of n");
		scanf("%d",&n);
		
			for(i=1;i<=n;i++)
			{
				sum=0;
				for(j=1;j<i;j++)
				{
					if(i%j==0)
			    	sum=sum+j;
				}
			
			
			if(sum==i)
			printf("perfect no : %d",i);
			
		}
			
	return 0;		
	}
