#include "Sort.h"

int main()
{
	Sort test;

	test.push_back(24);
	test.push_back(11);
	test.push_back(157);
	test.push_back(2);
	test.push_back(45);
	test.push_back(39);
	test.push_back(87);
	test.push_back(14);
	test.push_back(111);
	test.push_back(63);

	//test.bubbleSort(2);
	test.insertSort(2);

	test.print();

	while (true) {}

	return 0;
}