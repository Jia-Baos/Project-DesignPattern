#include "BubbleSort.h"

BubbleSort::BubbleSort()
{
	std::cout << "Initalize the Class: BubbleSort" << std::endl;
}

BubbleSort::~BubbleSort()
{
	std::cout << "Destory the Class: BubbleSort" << std::endl;
}

void BubbleSort::sort(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
