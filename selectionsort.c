/*selection sort*/
#include"sort.h"



void selsort(int *arr,int n,int * temparray)
{
	int i,cnt;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if( arr[j] < arr[i])
			{
				 //steps for swapping
           		 cnt = arr[ j ];
           		 arr[ j ] = arr[ i ];
            		 arr[ i ] = cnt;	
			}
			
		}

		
	}
	//copying elements from array arr to temparray
	for (int i=0;i<n;i++)
		temparray [i] = arr[i];

}


