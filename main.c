#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 10
#ifndef __HEADER__
	#define __HEADER__
	#include"sort.h"
#endif

////////////////////////////////////////////////

void display(int *arr ,int n);
void compare_array(int *temparray,int *checkarray);
int main()
{
	
	    //printf("Enter the number of list elements\n");
	    //scanf("%d",&N);

	    //array declared an initialised
	    int arr[] = {12,89,45,-34,0,67,12,45,-23,2};

//	    to initialised all the elements to zero
//	    memset(arr,0,N*sizeof(arr[0]));

	   // printf("Enter the elements\n");
	    //for(int i=0;i<N;i++)
	    //{
		  //  scanf("%d,",&arr[i]);
	    //}
	

		int *temparray;
		temparray = malloc(N*sizeof(int));
	    printf("The elements Entered are\n");
	    display(arr,N);
	
	while(1)
	{
	    //printf("before sorting array is \n");
	    //display(arr,N);


	    int ch;
	    printf("Enter the sorting technique\n1.Bubble Sort\n2.Insertion Sort\n3.Quick Sort\n4.Selection Sort\n5.Merge Sort\n");
	    printf("6.Exit\n");
		scanf("%d",&ch);
			
		if(!fflush(stdin) )
			printf("SUCCESS\n");
		else
			printf("FAILURE\n");
		printf("Your selected option is %d\n",ch);
	    switch(ch)
	    {
		    case 1:
				Bsort(arr,N,temparray);
				//printing array after sorting
				display(arr,N);
				
				break;
		    case 2:
	            inssort(arr,N,temparray);			
				display(arr,N);
				break;
		    case 3:
	           quick_sort(arr,0,N-1,N-1,temparray);	
				display(arr,N);
				break;
		    case 4:
	            selsort(arr,N,temparray);			
				display(arr,N);
				break;
		    case 5:
	     	    merge_sort(arr,N,temparray);		
				display(arr,N);
				break;
		    case 6:
				exit(0);
			
			
	    }
		int checkarray[] = {-34,-23,0,2,12,12,45,45,67,89};
		compare_array(temparray,checkarray);
		
	}
	
				

}
void compare_array(int *temparray,int *checkarray)
{
	int cnt = 0;
	
	int check_array[] = {-34,-23,0,2,12,12,45,45,67,89};
	printf("The checkarray is\n");
	for(int i=0;i<N;i++)
		printf("%d, ",checkarray[i]);
	printf("\n");
	
	//checking that array elements are equal or not
	for(int i=0;i<N;i++)
	{
		if(checkarray[i] == temparray[i])
			cnt++;
	}
	if(cnt == 10)
		printf("YES\n\n");
	else
		printf("NO\n\n");
}


//function for display of elements	
void display(int *arr ,int n)
{
	printf("The elements are\n");
	for(int i = 0;i<n;i++)
		printf("%d, ",*(arr+i));
	printf("\n\n");
}
