#include<stdio.h>
#include<conio.h>

int sum(int a, int n, int d)
{
	int x;
    x=n/2*((2*a)+(n-1)*d);
	
	return x;	
}

int main()
{
	int a, n, d,x;
	
	printf("a: ");
		scanf("%d",&a);
		printf("n: ");
		scanf("%d",&n);
		printf("d: ");
		scanf("%d",&d);
		
		x= sum(a,n,d);
		
	printf("ans: %d",x);	
		
	return 0;	
}
