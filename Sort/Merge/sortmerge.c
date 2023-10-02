#include <stdio.h>

#include "STD_TYPES.h"
#include "sortmerge.h"

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