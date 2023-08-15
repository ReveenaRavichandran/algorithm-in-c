#include<stdio.h>
int a[100],min,max;
void fun(int,int);
main()
{
	int n,i;
	printf("***DIVIDE AND CONQUER\n ***")
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter %d elem",i+1);
	scanf("%d",&a[i]);
	}
	fun(0,n-1);
	printf(" max=%d\nmin=%d\n",max,min);
	return 0;
}
void fun(int start,int end)
{
	int i,j,mid,min1,max1,min2,max2;
	i=start;
	j=end;
	if(i==j)
	min=max=a[i];
	else if(i==j-1)
	{
		if (a[i]>a[j])
		{
			min=a[i];
			max=a[j];
		}
		else
		{
			max=a[i];
			min=a[j];
		}
	}
	else
	{
		mid=(i+j)/2;
		fun(start,mid);
		min1=min;
		max1=max;
		fun(mid+1,end);
		min2=min;
		max2=max;
		if(min1<min2)
		min=min1;
		else
		min=min2;
		if(max1>max2)
		max=max1;
		else
		max=max2;	
	}
}
