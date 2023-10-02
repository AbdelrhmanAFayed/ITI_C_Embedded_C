

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