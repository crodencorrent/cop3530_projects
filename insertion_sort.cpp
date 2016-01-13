#include <iostream>

int main()
{
	int array[9] = {9,4,6,2,3,7,5,2,4};
	for (int i = 1; i <= 8; i++)
	{
		int t = array[i];
		int j;
		for (j = i -1; j >= 0 && t < array[j]; j--)
		{
			array[j+1] = array[j];
		}
		array[j+1] = t;
	}
	for (int i = 0; i < 9; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
