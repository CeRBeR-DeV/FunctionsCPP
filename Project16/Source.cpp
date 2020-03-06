#include <iostream>

const int ROWS = 10;
const int COLS = 10;

void fill_rand(int arr[], const int SIZE);
void fill_rand(double arr[], const int SIZE);// заполнение масива случайными значениями
void fill_rand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void print_array(int arr[], const int SIZE); // вывод масива на экран 
void print_array(double arr[], const int SIZE); // вывод масива на экран 
void print_array(int arr[ROWS][COLS], const int ROWS, const int COLS);

void sort_array(int arr[], const int SIZE); // сортировка масива
void sort_array(double arr[], const int SIZE);
void sort_array(int arr[ROWS][COLS], const int ROWS, const int COLS);

int sum_array(int arr[], const int SIZE); // сумма елементов масива
int average_array(int arr[], const int SIZE); // среднее арифетическое масива

int min_elemet_array(int arr[], const int SIZE); // минимальный елемент масива
int max_element_array(int arr[], const int SIZE); // максимальный елемент масива

void main()
{
	/*setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE];
	int rez = 1;
	std::cout << "Заполнение масива случайными значениями:" << std::endl;
	std::cout << "Сортировка масива:" << std::endl;
	sort_array(arr, SIZE);
	print_array(arr, SIZE);
	std::cout << std::endl;
	std::cout << "Сумма елементов масива: ";
	rez = sum_array(arr, SIZE);
	std::cout << rez << std::endl;
	std::cout << "Среднее арифметическое елементов масива: ";
	rez = average_array(arr, SIZE);
	std::cout << rez << std::endl;
	std::cout << "Минимальное значение в масиве: ";
	rez = min_elemet_array(arr, SIZE);
	std::cout << rez << std::endl;
	std::cout << "Максимальное значение в масиве: ";
	rez = max_element_array(arr, SIZE);
	std::cout << rez;
	double brr[SIZE];

	fill_rand(brr, SIZE);
	std::cout << std::endl;
	print_array(brr, SIZE);
	std::cout << std::endl;
	sort_array(brr, SIZE);
	std::cout << std::endl;
	print_array(brr, SIZE);*/
	int A[ROWS][COLS];
	fill_rand(A, ROWS, COLS);
	print_array(A, ROWS, COLS);
	std::cout << std::endl;
	sort_array(A, ROWS, COLS);
	print_array(A, ROWS, COLS);

}

void sort_array(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iter = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				int l;
				if (k == i)
				{
					l = j + 1;
				}
				else
				{
					l = 0;
				}
				for ( ; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iter++;
				}
			}
		}
	iter++;
	}
	std::cout << std::endl;
	std::cout << iter;
	std::cout << std::endl;
}

void fill_rand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void print_array(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

void fill_rand(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = (rand() % 100 + 10) / 10;

	}
}

void fill_rand(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = (rand() % 100 + 10) / 11;
		arr[i] /= 10;
	}
}

void print_array(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << "\t";
	}
}

void print_array(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << "\t";
	}
}

void sort_array(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = SIZE - 1; j >= i + 1; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				int buffer = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = buffer;
			}
		}
	}
}

void sort_array(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = SIZE - 1; j >= i + 1; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				double buffer = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = buffer;
			}
		}
	}
}

int sum_array(int arr[], const int SIZE)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int average_array(int arr[], const int SIZE)
{
	int avg = 0;
	for (int i = 0; i < SIZE; i++)
	{
		avg += arr[i];
	}
	avg = avg / 2;
	return avg;
}

int min_elemet_array(int arr[], const int SIZE)
{
	int min_element = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min_element)
		{
			min_element = arr[i];
		}
	}
	return min_element;
}

int max_element_array(int arr[], const int SIZE)
{
	int max_element = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max_element)
		{
			max_element = arr[i];
		}
	}
	return max_element;
}
