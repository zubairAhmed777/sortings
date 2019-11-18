/*program to understand selection sort*/
/*complexity = O(n^2);*/
#include"sort.h"



void selsort(int *arr,int n,int * temparray)
{
	int small,i,cnt=0;
	for(int i=0;i<n-1;i++)
	{
		 small = i;
		for(int j=i+1;j<n;j++)
		{
			if( *(arr+j) < arr[small])
			{
				small = j;
			}
			
		}
		//for initially checking whether array is sorted or not
		if(cnt == 0)
		{	
		//if in 1st pass the value doesn't change it means array is already sorted
		
				cnt++;
			 if(small == i)
			{
				return;
			}
		}
		/*put smallest value at 0th place*/
		Sswap(&arr[i],&arr[small]);
	}
	//copying elements from array arr to temparray
	for (int i=0;i<n;i++)
		temparray [i] = arr[i];

}

void Sswap(int* x,int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

