#include<stdio.h>
#include<math.h>
int main()
{
	int no , count =0, temp ,sq,c;
	printf("input any number");
	scanf("%d",&no);
	sq= no*no;
	temp=no;

while (no>0)
{
	
	no=no/10;
	count++;
	
}
no=temp;
c=pow(10,count);
if(no==sq%c)
{
	printf("perfect sq");
	}
else
{
	printf(" not perfect sq");
	
}
}




