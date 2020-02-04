#include "Sort.h"

Sort::Sort()
{
	arrSize = 0;
	arrCapacity = 5;
	arr = new int[arrCapacity];
}

Sort::~Sort()
{
}

size_t Sort::size() const
{
	return arrSize;
}

void Sort::reserve(size_t newCapacity)
{
	int* _arr = new int[newCapacity];
	for (int i = 0; i < arrCapacity; ++i)
	{
		_arr[i] = arr[i];
	}
	arrCapacity = newCapacity;
	delete[] arr;
	arr = _arr;
}

void Sort::push_back(const int &value)
{
	if (arrSize >= arrCapacity)
	{
		reserve(arrSize * 2);
	}
	arr[size()] = value;
	arrSize++;
}

void Sort::pop_back()
{
	arr[arrSize - 1] = NULL;
	arrSize--;
}

void Sort::bubbleSort(int order)
{
	int tmp = 0;

	if (order == 1)
	{
		for (int i = 0; i < arrSize; ++i)
		{
			for (int j = 1; j < arrSize; ++j)
			{
				//flip inequality to reverse sorting order
				if (arr[j] < arr[j - 1])
				{
					tmp = arr[j];
					arr[j] = arr[j - 1];
					arr[j - 1] = tmp;
				}
			}
		}
	}
	else if (order == 2)
	{
		for (int i = 0; i < arrSize; ++i)
		{
			for (int j = 1; j < arrSize; ++j)
			{
				//flip inequality to reverse sorting order
				if (arr[j] > arr[j - 1])
				{
					tmp = arr[j];
					arr[j] = arr[j - 1];
					arr[j - 1] = tmp;
				}
			}
		}
	}
	else
	{
		cout << "Invalid command" << endl;
		system("pause");
		return;
	}
}

void Sort::insertSort(int order)
{
	if (order == 1)
	{
		for (int i = 1; i < arrSize; ++i)
		{
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] > key)	//flip inequality to reverse sorting order
			{
				arr[j + 1] = arr[j];
				j--;
				arr[j + 1] = key;
			}
		}
	}
	else if (order == 2)
	{
		for (int i = 1; i < arrSize; ++i)
		{
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 && arr[j] < key)	//flip inequality to reverse sorting order
			{
				arr[j + 1] = arr[j];
				j--;
				arr[j + 1] = key;
			}
		}
	}
}

void Sort::print()
{
	cout << endl;
	for (int i = 0; i < arrSize; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}