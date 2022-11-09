#include <vector>
#include <iostream>

size_t GetSize(const char* prompt)
{
	size_t size;

	std::cout << prompt;
	std::cin >> size;

	return size;
}

void InitializeMatrix(std::vector<std::vector<double>>& m)
{
	for(size_t row = 0; row < m.size(); row++)
	{
		for(size_t col = 0; col < m[row].size(); col++)
		{
			auto& val = m[row][col];

			std::cout << "T[" << row << ", " << col << "] = ";
			std::cin >> val;
		}
	}
}

void ShowMatrix(const std::vector<std::vector<double>>& m)
{
	for(size_t row = 0; row < m.size(); row++)
	{
		for(size_t col = 0; col < m[row].size(); col++)
		{
			auto& val = m[row][col];

			std::cout << "T[" << row << ", " << col << "] = " << val << std::endl;
		}
	}
}

int main()
{
	std::vector<std::vector<double>> matrix(GetSize("rows = "), std::vector<double>(GetSize("columns = ")));

	std::cout << "==============================\n" << "Input\n" << "==============================\n";
	InitializeMatrix(matrix);
	std::cout << "==============================\n" << "Result\n" << "==============================\n";
	ShowMatrix(matrix);	
}