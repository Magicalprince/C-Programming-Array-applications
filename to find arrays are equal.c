#include<stdlib.h>
int main()
{
    int n, m,i,j,c=0;
    printf("\nEnter number of elements in 1st array : ");
	scanf("%d",&n);
    printf("\nEnter number of elements in 2nd array : ");
	scanf("%d",&m);
	if(n==m)
	{
		int array1[n];
	    int array2[m];
	    printf("\nEnter %d elements of an 1st array :\n",n);
	    for(i = 0; i < n; i++)
	    {
	        scanf("%d",&array1[i]);
	    }
	    printf("\nEnter %d elements of an 2nd array :\n",m);
    	for(i = 0; i < m; i++)
    	{
    	    scanf("%d",&array2[i]);
    	}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(array1[i]==array2[j])
				{
					array2[j]='\n';
					c++;
					break;
				}
			}
		}
		if(c==n)
    	    printf("Same");
		else
	        printf("Not same");		
	}
	else
	        printf("Not same");		
	return 0;
}
