#include <iostream>
#include <cmath>

void cw1()
{
	printf("Ćwiczenie 1:\n\n");
	double a, b;

	std::cout << "Podaj licznik: ";
	std::cin >> a;

	std::cout << "Podaj mianownik: ";
	std::cin >> b;

	std::cout << a/b << std::endl;
}

void cw2()
{
	printf("Ćwiczenie 2:\n\n");
	int a, b;

	std::cout << "a = ";
	std::cin >> a;

	std::cout << "b = ";
	std::cin >> b;

	std::cout << std::endl;

	std::cout << "a+b= " << a+b << std::endl;
	std::cout << "a-b= " << a-b << std::endl;
	std::cout << "a*b= " << a*b << std::endl;
	std::cout << "a/b= " << a/b << std::endl;
	std::cout << "a%b= " << a%b << std::endl;
}

void cw3()
{
	printf("Ćwiczenie 3:\n\n");
	double r;
	double pole, obwod;

	std::cout << "Podaj wartość promienia r: ";
	std::cin >> r;

	pole = M_PI * r * r;
	obwod = 2 * M_PI * r;

	printf(
		"+-----------+---------+\n"
		"| Pole pow. |  Obwód  |\n"
		"+-----------+---------+\n"
		"| %*.*f | %*.*f |\n"
		"+---------------------+\n",
		9, 2, pole, 7, 2, obwod
		);
}

void cw4()
{
	printf("Ćwiczenie 4:\n\n");

	double a, b, c;

	std::cout << "a = ";
	std::cin >> a;

	std::cout << "b = ";
	std::cin >> b;

	std::cout << "c = ";
	std::cin >> c;

	if(!(a+b > c && a+c > b && b+c > a))
	{
		printf("Nie trójkąt\n");
		return;
	}

	double p = (a+b+c)/2;
	double pole = sqrt(p * (p-a) * (p-b) * (p-c));

	std::cout << "Pole wynosi " << pole << std::endl;
}

void cw5()
{
	printf("Ćwiczenie 5:\n\n");

	double values[3];

	std::cout << "a = ";
	std::cin >> values[0];

	std::cout << "b = ";
	std::cin >> values[1];

	std::cout << "c = ";
	std::cin >> values[2];

	for(size_t i = 0; i < 3; i++)
	{
		for(size_t j = 0; j < 2; j++)
		{
			double tmp1 = values[j] > values[j+1] ? values[j+1] : values[j];
			double tmp2 = values[j] > values[j+1] ? values[j] : values[j+1];

			values[j+1] = tmp2;
			values[j] = tmp1;
		}
	}

	printf("%lf %lf %lf\n", values[0], values[1], values[2]);
}

void cw6()
{
	int day;

	std::cout << "Podaj numer miesiaca: ";
	std::cin >> day;

	switch(day)
	{
		case 1:
			printf("Liczba dni: 31\n");
		break;
		case 2:
			printf("Liczba dni: 28\n");
		break;
		case 3:
			printf("Liczba dni: 31\n");
		break;
		case 4:
			printf("Liczba dni: 30\n");
		break;
		case 5:
			printf("Liczba dni: 31\n");
		break;
		case 6:
			printf("Liczba dni: 30\n");
		break;
		case 7:
			printf("Liczba dni: 31\n");
		break;
		case 8:
			printf("Liczba dni: 31\n");
		break;
		case 9:
			printf("Liczba dni: 30\n");
		break;
		case 10:
			printf("Liczba dni: 31\n");
		break;
		case 11:
			printf("Liczba dni: 30\n");
		break;
		case 12:
			printf("Liczba dni: 31\n");
		break;

		default:
			printf("Niepoprawny numer miesiąca\n");
		break;
	}
}

void print_menu()
{
	printf(
		"1. Dodawanie\n"
		"2. Odejmowanie\n"
		"3. Mnożenie\n"
		"4. Dzielenie\n"
		"5. Modulo\n"
		"6. Wyjście\n"
		);
}

void dodawanie()
{
	double a, b;

	std::cout << "a = ";
	std::cin >> a;

	std::cout << "b = ";
	std::cin >> b;

	std::cout << "Wynik: " << a+b << std::endl;
}

void odejmowanie()
{
	double a, b;

	std::cout << "a = ";
	std::cin >> a;

	std::cout << "b = ";
	std::cin >> b;

	std::cout << "Wynik: " << a-b << std::endl;
}

void mnozenie()
{
	double a, b;

	std::cout << "a = ";
	std::cin >> a;

	std::cout << "b = ";
	std::cin >> b;

	std::cout << "Wynik: " << a*b << std::endl;
}

void dzielenie()
{
	double a, b;

	std::cout << "a = ";
	std::cin >> a;

	std::cout << "b = ";
	std::cin >> b;

	if(b == 0)
	{
		printf("Dzielenie przez 0!\n");
		return;
	}

	std::cout << "Wynik: " << a/b << std::endl;
}

void modulo()
{
	int a, b;

	std::cout << "a = ";
	std::cin >> a;

	std::cout << "b = ";
	std::cin >> b;

	if(b == 0)
	{
		printf("Dzielenie przez 0!\n");
		return;
	}

	std::cout << "Wynik: " << a%b << std::endl;
}

void cw7()
{

	while(true)
	{
		print_menu();
		int choice;
		std::cin >> choice;

		if(choice >= 6)
			break;

		switch(choice)
		{
			case 1:
				dodawanie();
			break;
			case 2:
				odejmowanie();
			break;
			case 3:
				mnozenie();
			break;
			case 4:
				dzielenie();
			break;
			case 5:
				modulo();
			break;
		}
	}
}


int main()
{
	/*cw1();
	cw2();
	cw3();
	cw4();*/
//	cw5();
	//cw6();
	cw7();
}
