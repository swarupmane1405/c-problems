#include<stdio.h>

int sumof_kthnum_inseries(int k)
{
	int serise[10],n=0,sum=0,loop;
	serise[n++] = 1;
	serise[n++] = 2;
	serise[n++] = 3;
	serise[n++] = 4;
	
	while(n<k)
	{
		sum=0;
		for(loop =0;loop<4;loop++)
		{
			sum += serise[n-loop-1];
		}
		 serise[n] = sum;
		n++;
	}
	return serise[n-1];
}
int main()
{
	int k,sum1;
	printf("enter k:");
	scanf("%d",&k);
	printf("\n %d",sumof_kthnum_inseries(k));
	return 0;
	}
