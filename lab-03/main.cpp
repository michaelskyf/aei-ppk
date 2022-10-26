#include <iostream>

int main()
{
	int srednia = 0;
	int wagi = 0;
	int liczba_ocen = 0;
	int min = 0, max = 0;
	bool minmax_set = false;

	while(true)
	{
		int ocena, waga = 1;

		std::cout << "Podaj ocene: ";
		std::cin >> ocena;

		if(ocena == 0)
			break;

		liczba_ocen++;

		if(minmax_set == false)
		{
			min = ocena;
			max = ocena;
			minmax_set = true;
		}
		else if(min > ocena)
		{
			min = ocena;
		}
		else if(max < ocena)
		{
			max = ocena;
		}

		srednia += waga * ocena;
		wagi += waga;
	}

	std::cout << "Liczba ocen: " << liczba_ocen << std::endl;
	std::cout << "Średnia: " << (wagi ? srednia/wagi : 0) << std::endl;
	std::cout << "Min: " << min << " Max: " << max << std::endl;
}
