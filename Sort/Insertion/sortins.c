#include <stdio.h>
#include "STD_TYPES.h"
#include "sortins.h"

void sort_void_bubble(sint32 arr[] , uint16 n )
{
	sint32 temp ,i, j;
	for ( i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
  
        while (j >= 0 && arr[j] > temp)
		{
			
            arr[j + 1] = arr[j];
            j = j - 1;
			
        }
        arr[j + 1] = temp;
    }
	
	
}