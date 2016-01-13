#include <iostream>
using namespace std;

int main()
{
	int array[10] = {7,3,4,5,2,7,1,8,5,9};
	bool swapped;
	for (int j = 0; j < 9; j++)
	{
		swapped = false;
		for (int i = 0; i < 9; i++)
		{
			if (array[i] > array[i+1])
			{
				swapped = true;
				int temp = array[i];
				array[i] = array[i +1];
				array[i +1] = temp;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}
	for (int z = 0; z < 10; z++)
	{
		cout << array[z] << " ";
	}
}
