#include <stdio.h>
#include "STD_TYPES.h"
#include "Sort.h"
void sort_void_bubble(sint32 arr[] , uint16 size )
{
	int temp = 0 ;
	for(uint16 i = 0; i < (size - 1) ; i++)
	{
		for(uint16 j = 0; j <(size - 1 - i); j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp = arr[j] ;
					arr[j] = arr[j+1] ;
					arr[j+1] = temp; 
				}
			}	
	}
}
void merge(sint32 arr[], uint16 l, uint16 m, uint16 r)
{
	uint16 i, j, k;
    uint16 n1 = m - l + 1;
    uint16 n2 = r - m;
	
	sint32 L[n1], R[n2];
	
	for (i = 0; i < n1; i++)
	 {
        L[i] = arr[l + i];
	 }
	for (j = 0; j < n2; j++)
	{
        R[j] = arr[m + 1 + j];
	}
	i = 0; 
    j = 0; 
    k = l;
	while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else 
		{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
	while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void sort_merge(sint32 arr[], uint16 l , uint16 r )
{
	if (l < r)
	{
        int m = l + (r - l) / 2;
 
        sort_merge(arr, l, m);
        sort_merge(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
	
}
void sort_void_selection( sint32 arr[] , uint16 n)
{
	 int i, j, min_ind,temp;
	  for (i = 0; i < n-1; i++)
    {
        min_ind = i;
        for (j = i+1; j < n; j++)
		{
          if (arr[j] < arr[min_ind])
		  {
			  min_ind = j;
		  }
           if(min_ind != i)
           {
			   temp = arr[min_ind];
			   arr[min_ind] = arr[i];
			   arr[i] = temp ;
		   }
		}
    }
	 
	
}