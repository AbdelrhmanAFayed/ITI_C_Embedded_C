#include <stdio.h>
#include "STD_TYPES.h"
#include "sortselc.h"

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