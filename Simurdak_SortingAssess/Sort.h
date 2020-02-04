#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Sort
{
public:
	int* arr;
	size_t arrSize;
	size_t arrCapacity;

	Sort();
	~Sort();

	size_t size() const;
	void reserve(size_t newCapacity);
	void push_back(const int &value);
	void pop_back();
	void bubbleSort(int order);
	void insertSort(int order);
	void print();
};

