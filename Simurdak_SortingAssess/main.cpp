#include "Sort.h"

int main()
{
	bool running = true;

	while (running)
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

		cout << "List created with 10 elements:" << endl;
		test.print();

		int sortMethod = 0;
		cout << "Select sort method:\n1. Bubble sort\n2. Insert sort" << endl;
		cin >> sortMethod;

		int sortOrder = 0;
		switch (sortMethod)
		{
		case 1:
			cout << "Select sort order:\n1. Ascending\n2. Descending" << endl;
			cin >> sortOrder;
			switch (sortOrder)
			{
			case 1:
				test.bubbleSort(1);
				test.print();
				break;
			case 2:
				test.bubbleSort(2);
				test.print();
				break;
			}
			break;

		case 2:
			cout << "\nSelect sort order:\n1. Ascending\n2. Descending" << endl;
			cin >> sortOrder;
			switch (sortOrder)
			{
			case 1:
				test.insertSort(1);
				test.print();
				break;
			case 2:
				test.insertSort(2);
				test.print();
				break;
			}
			break;
		}

		int restartOption = 0;
		cout << "Would you like to...\n1. Restart\n2. Exit" << endl;
		cin >> restartOption;

		switch (restartOption)
		{
		case 1:
			system("CLS");
			running = true;
			break;
		case 2:
			running = false;
			break;
		}
	}

	return 0;
}