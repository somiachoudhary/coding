#include<stdio.h>
int main()
{
	int j,m[6][6],i,n,max=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(i!=j)
		{
			m[i][j]=a[i]*a[j];
		}
	
	}	printf(" \n");
}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(((m[i][j])>max)&&(i!=j))
		{
			max=m[i][j];
				
		}
}
}
	printf(" \n %d",max);















}
