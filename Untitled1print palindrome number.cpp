#include<stdio.h>
int main()
{
	int a,b=0,n;
	printf("Enter a number");
	scanf("%d",&a);
	n=a;
	while(n!=0)
	{
		b=10*b+n%10;
		n=n/10;
		if(a==b)
		{
			printf("%dis a palindrome number",a);
		}
		else
		{
			printf("%d is a not palindrome number and its reverse is %d ",a,b);
		}
		return 0;
	}
}
