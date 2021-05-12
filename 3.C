#include<stdio.h>
#include<conio.h>
struct family
{
char sur_name[10];
char item_name[10];
int quantity;
int price;
}f;
int main()
{
int i,Total=0,sum=0;
    struct family f[20];

for(i=0;i<20;i++)
{
printf("Enter surname:");
scanf("%s",f[i].sur_name);
printf("Enter item name:");
scanf("%s",f[i].item_name);
printf("Enter quantity:");
scanf("%d",&f[i].quantity);
printf("Enter price:");
scanf("%d",&f[i].price);
printf("\n");
}
for(i=0;i<20;i++)
{
  printf("The surname is %s",f[i].sur_name);
  printf("\nThe item name is %s",f[i].item_name);
  printf("\nQuantity is %d",f[i].quantity);
  printf("\nPrice per item is %d",f[i].price);
  sum=f[i].quantity*f[i].price;
  printf("Total is %d\t",sum);
  Total=Total+sum;
  printf("\n");
}
 printf("The total amount of govt.spend on each family is %d",Total);
getch();
return 0;
}
