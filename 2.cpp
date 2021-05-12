#include<stdio.h>
#include<conio.h>

struct employee
{
	char name[10];
	char dept[10];
	int exp;
	int salary;
} e[20];

int main()
{
	int i;
	for(i=0;i<20;i++)
	{
		printf("name: ");
		scanf("%s",e[i].name);
		printf("dept: ");
		scanf("%s",e[i].dept);
		printf("exp: ");
		scanf("%d",&e[i].exp);
		e[i].salary=10000;
	}
	for(i=0;i<20;i++)
	{
		if(e[i].exp>5 && e[i].exp<=10  )
		{
		  e[i].salary+=5000;
	    }else
         	{
         		if(e[i].exp>10 && e[i].exp<=15  )
	        	{
		          e[i].salary+=10000;
	            }else
	            {
	            if(e[i].exp>15 && e[i].exp<=20  )
	        	{
		          e[i].salary+=15000;
	            }else
	            {
	            	if(e[i].exp>20  )
	        	{
		          e[i].salary=50000;
	            }
	            	
				}
	            	
				}
		
         	}
         	
         }
    for(i=0;i<20;i++)
	{
		printf("name: %s\n",e[i].name);
		printf("incremented salary: %d\n\n",e[i].salary);
	}
	return 0;
}

