
#include <iostream>

void fill_rand(int arr[], const int SIZE); // заполнение масива случайными значениями
void print_array(int arr[], const int SIZE); // вывод масива на экран 
void sort_array(int arr[], const int SIZE); // сортировка масива
int sum_array(int arr[], const int SIZE); // сумма елементов масива
int average_array(int arr[], const int SIZE); // среднее арифетическое масива
int min_elemet_array(int arr[], const int SIZE); // минимальный елемент масива
int max_element_array(int arr[], const int SIZE); // максимальный елемент масива

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE];
	int rez = 1;
	std::cout << "Заполнение масива случайными значениями:" << std::endl;
	fill_rand(arr, SIZE);
	std::cout << "Вывод масива: " << std::endl;
	print_array(arr, SIZE);
	std::cout << std::endl;
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

}
void fill_rand(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}

void print_array(int arr[], const int SIZE)
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

