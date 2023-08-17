#include<stdio.h>
int a[100];
heapsort(int);
heapify(int,int);
main()
{
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d elem:",i+1);
		scanf("%d",&a[i]);
	}
	heapsort(n);
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
} 
    heapsort(int n)
    {
		int i,c;
		for(i=n/2-1;i>=0;i--)
		heapify(i,n);
		for(i=n-1;i>=0;i++)
		{
			c=a[0];
			a[0]=a[i];
			a[i]=c;
			heapify(0,i);
		}
	heapify(int i,int n)
	{
		int longest,left,right,c;
		longest=i;
		left=2*i+1;
		right=2*i+2;
		if(left<n && a[left]>a[longest])
		longest=left;
		if(right<n && a[right]>a[longest])
		longest=right;
		if(longest !=i)
		{
			c=a[longest];
			a[longest]=a[i];
			a[i]=c;
			heapify(longest,n);
		}
	}
}
