#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#define N 10
#ifndef __HEADER__
	#define __HEADER__
	#include"sort.h"
#endif

////////////////////////////////////////////////

int N;


void display(int *arr ,int n);
void compare_array(int *temparray,int *checkarray);
int main()
{
	FILE *fp,*fp1,*fp2;
	fp=fopen("./data.txt","r");
	if(fp==NULL){
		printf("data.txt failed..\n");return -1;
	}
	fp1=fopen("./check.txt","r");
	if(fp1==NULL){
		printf("check.txt failed..\n");return -1;
	}
	fp2=fopen("./result.txt","a+");
	if(fp2==NULL){
		printf("result.txt failed..\n");return -1;
	}

fscanf(fp,"%d\t",&N);

	    int i=0,arr[N]; //= {12,89,45,-34,0,67,12,45,-23,2};
while(i<N && arr[i]!=EOF)
{
	fscanf(fp,"%d\t",(arr+i));i++;
}
	
		int *temparray;
		temparray = malloc(N*sizeof(int));
	    printf("The elements Entered are\n");
	    display(arr,N);
	
	while(1)
	{

	    int ch;
	    printf("Enter the sorting technique\n1.Bubble Sort\n2.Insertion Sort\n3.Quick Sort\n4.Selection Sort\n5)merge_sort\n");
	    printf("6.Exit\n");
		scanf("%d",&ch);

		printf("Your selected option is %d\n",ch);
	    switch(ch)
	    {
		    case 1:
				Bsort(arr,N,temparray);
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
				fclose(fp);fclose(fp2);fclose(fp1);
			
			
	    }i=0;
	while(i<N)
	{
		fprintf(fp2,"%d\t",arr[i]);
		i++;
	}
fprintf(fp2,"\n");
		
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
