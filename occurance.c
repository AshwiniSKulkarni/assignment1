#include <stdio.h>
void occurance(int,int);
int main(void)
{
    int no,digit;

    printf("\nEnter any number");
    scanf("%d",&no);
    printf("\nEnter any digit to count");
    scanf("%d",&digit);
    occurance(no,digit);

    return 0;
}


	void occurance(int no,int digit)
	{
		int cnt,num,rem;
		cnt=0;
    num=no;

    while(num>0)
    {
        rem=num%10;
        if(rem==digit)
            cnt++;
        num/=10;
    }

    printf("\nTotal occurrence of digit  %d  in Number  %d  is : %d .\n",digit,no,cnt);

	}
