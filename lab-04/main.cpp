#include <cstdlib>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

void p1()
{
	size_t vector_size;
	double *min, *max;
	std::vector<double> array;


	while(true)
	{
		std::cout << "Input array size: ";
		std::cin >> vector_size;

		try
		{
			array.resize(vector_size);
		}
		catch(const std::exception& err)
		{
			std::cerr << "Failed to allocate memory for vector: " << err.what() << std::endl;
			continue;
		}

		break;
	}

	for(size_t i = 0; i < array.size(); i++)
	{
		std::cout << "T[" << i+1 << "] = ";
		std::cin >> array[i];
	}

	if(array.size() > 0)
	{
		min = &array[0];
		max = &array[0];
	}
	else
	{
		std::cerr << "Not enough elements" << std::endl;
		return;
	}

	for(auto& i : array)
	{
		if(*min > i)
			min = &i;

		if(*max < i)
			max = &i;
	}

	size_t min_index = min - array.data();
	size_t max_index = max - array.data();

	std::cout << "Minimal value: " << *min << " at index " << min - array.data() + 1 << std::endl;
	std::cout << "Maximal value: " << *max << " at index " << max - array.data() + 1 << std::endl;
}

void p2()
{
	size_t column_count, row_count;
	float *min, *max;
	std::vector<float> array;

	while(true)
	{
		std::cout << "Input column count: ";
		std::cin >> column_count;
		std::cout << "Input row count: ";
		std::cin >> row_count;

		try
		{
			array.resize(row_count * column_count);
		}
		catch(const std::exception& err)
		{
			std::cerr << "Failed to allocate memory for vector: " << err.what() << std::endl;
			continue;
		}

		break;
	}

	for(size_t i = 0; i < row_count; i++)
	{
		for(size_t j = 0; j < column_count; j++)
		{
			std::cout << "T[" << i+1 << ", " << j+1 << "] = ";
			std::cin >> array[i + j * row_count];
		}
	}

	if(array.size() > 0)
	{
		min = &array[0];
		max = &array[0];
	}
	else
	{
		std::cerr << "Not enough elements" << std::endl;
		return;
	}

	for(auto& i : array)
	{
		if(*min > i)
			min = &i;

		if(*max < i)
			max = &i;
	}

	size_t min_index = min - array.data();
	size_t max_index = max - array.data();

	std::cout << "Minimal value: " << *min << " at index [" << (min_index % row_count) + 1 << ", " << (min_index / row_count) + 1 << "]" << std::endl;
	std::cout << "Maximal value: " << *max << " at index [" << (max_index % row_count) + 1 << ", " << (max_index / row_count) + 1 << "]" << std::endl;
}

int main()
{
	//p1();
	p2();
}
