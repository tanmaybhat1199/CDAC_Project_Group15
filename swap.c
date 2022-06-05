#include<stdio.h>

int swap(int a,int b);
int main()
{
                                       	int a,b,c;
	printf("enter the numbers");
	scanf("%d %d",&a,&b);
	printf("befor swapping %d %d",a,b);
	c=swap(a,b);
	printf("\n After swapping %d  %d",a,b);
	
	
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
