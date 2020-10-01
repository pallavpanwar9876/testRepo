#include<stdio.h>
int main()
{
	int a1,a2,s;	a1=0;
	a2=1;
	printf("Enter the limit upto which you want to see fibonacci series");
	scanf("%d"&s)
	int sum;
	for(int i=2;i<=s;++i)
	{	printf("%d",a1+a2);
		a1=a2;
		a1=a1+a2;
	}

	//I am going to change your program and it's on your beloved memory 
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	printf("%d",n);
	}

return 0;
}
