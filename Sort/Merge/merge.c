#include <stdio.h>

#include "STD_TYPES.h"
#include "sortmerge.h"

#define MAX_SIZE 100

void main(void)
{
	sint32 arr[MAX_SIZE] ;
	uint16 n = 0;
	printf("Enter size of array: ");
    scanf("%d", &n);
	uint16 miss = 0 ;
	
	for(uint16 i = 0; i <n; i++)
	{
		printf("Enter element (%d) : ",i+1);
		scanf("%d", &arr[i]);	
	}
	sort_merge(arr, 0, n);
	
	for(uint16 i = 0; i <n; i++)
	{
		printf("Element (%d) : %d\n",i+1,arr[i]);	
	}
	
}
