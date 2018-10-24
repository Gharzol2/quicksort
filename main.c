#include "quicksort.c"


void test_arrays(int* arr)
{

	int temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
}

int main()
{
	int test_arr[] = {1,2,3};
	test_arrays(test_arr);
	for (int i = 0; i <= 2; i++)
	{
		printf("%d", test_arr[i]);
	}
	int arr[] = {5,2,6,3,4,6,5,3,8,6,34,5,6,7,4,3,45,6,4,56,7,7,5,7,3,1};
	printf("%d\n", arr[0]);

	quicksort(arr, 0, 25);

	printf("%d\n", arr[0]);
	printf("\nsortert\n");
	for (int i = 0; i <= 25; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n\n");

	int part_arr[] = {5,2,6,3,4,6,5,3,8,6,34,5,6,7,4,3,45,6,4,56,7,7,5,7,3,6};
	printf("\n%d\n", Partition(part_arr, 0, 25));

	printf("\n\n");
	for (int i = 0; i <= 25; i++)
	{
		printf("%d ", part_arr[i]);
	}

	return 0;
}