#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
int n,i;
int a[50];
char str[50];

printf("array length");
scanf("%d",&n);
printf("numbers");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
	
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
printf("\nnumbers\n");
for(i=0;i<n;i++)
{
str[i]=a[i];
}
str[i]='\0';

puts(str);


getch();
return 0;
}
