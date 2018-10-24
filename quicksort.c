#include <stdio.h>

// Returns index of partition


void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int Partition(int* array, int start_index, int end_index)
{
	int pivot = array[end_index];
	int i = start_index;

	for (int j = start_index; j <= end_index; j++)
	{
		if (array[j] < pivot)
		{
			printf("do we get here?");
			swap(&array[i], &array[j]);

			i = i + 1;
		}
	}
	swap(&array[i], &array[end_index]);
	return i;
}


// Sorts array
void quicksort(int* array, int start_index, int end_index)
{
	if (start_index < end_index)
	{
		printf("%d %d \n", start_index, end_index);

		//printf("before partition");
		int partition_index = Partition(array, start_index, end_index);
		printf("%d\n", partition_index);
		//printf("before sort 1");
		quicksort(array, start_index, partition_index - 1);
		//printf("before sort 2");
		quicksort(array, partition_index + 1, end_index);
	}
}



