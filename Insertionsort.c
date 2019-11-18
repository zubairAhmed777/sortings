/*program to understand Insertion sort. It's like arranging the cards*/
#include"sort.h"


void inssort(int *arr,int n,int *temparray)
{
	printf("In inssort\n");
	int temp,j;
	int check_array[] = {12,13,14,15,16,17,18,19,20,21};
	/*i is unsorted array*/
	for(int i=1;i<n;i++)
	{
		
		//temp stores the first element
		temp = arr[i];

		/*here comparison of value from ith location to 0th location of array*/ 
		for(j=i-1;j>=0;j--)
		{
			//if first value of old array is smaller than next value then keeps shifting array
			if(temp < arr[j])
				arr[j+1] = arr[j];/*keep shifting the elements*/
			else 	
				break;
		
		}
		//here after shifting +1 is necessary to increment due to loop false condition
		arr[j+1] = temp;
		
		
	}
	//copying elements from array arr to temparray
	for (int i=0;i<n;i++)
		temparray [i] = arr[i];

	
}


