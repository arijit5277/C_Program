#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row = 4, col = 3, i = 0, j = 0, count = 0;
	int (*arr)[row][col] = malloc(sizeof(*arr));
//	int* ptr = malloc ((row*col) * sizeof(int));
//	for(i =0 ; i< row*col ;i++)
//		ptr[i] = i+1;
	
	for(i = 0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			(*arr)[row][col] = ++count;
		}
	}	
	for(i = 0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ",*(arr)[row][col]);
	//		printf("%d ",ptr[i*col+j]);
		}
		printf("\n");
	}	
	free(arr);
}
