#include<stdio.h>
#define min(a,b)a<b ? a:b
int fib_search(int *arr,int n, int se)
{
	int a,b,c,offset=-1,index;
	a=0;
	b=1;
	c=a+b;
	while(c<n){
	
	
		a=b;
		b=c;
		c=a+b;
			}
    while(c>1)
			{
				index=min(offset+a,n-1);
				if(se==arr[index]) return index;
				else if(se>arr[index])
				{
					c=b;
					b=a;
					a=c-b;
					offset=index;
				}
				else
				{
					c=a;
					b=b-a;
					a=c-b;
				}
			}
			if(b && arr[offset +1]==se){
				return offset +1;
			}
return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se;
	scanf("%d",&se);
	int res= fib_search(arr,n,se);
	if(res==-1)
	{
		printf("Element not found");
	}
	else
	{
		printf("Element found at %d index",res);
	}
	return 0;
}

