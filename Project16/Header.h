
#include <iostream>

void fill_rand(int arr[], const int SIZE); // ���������� ������ ���������� ����������
void print_array(int arr[], const int SIZE); // ����� ������ �� ����� 
void sort_array(int arr[], const int SIZE); // ���������� ������
int sum_array(int arr[], const int SIZE); // ����� ��������� ������
int average_array(int arr[], const int SIZE); // ������� ������������� ������
int min_elemet_array(int arr[], const int SIZE); // ����������� ������� ������
int max_element_array(int arr[], const int SIZE); // ������������ ������� ������

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int arr[SIZE];
	int rez = 1;
	std::cout << "���������� ������ ���������� ����������:" << std::endl;
	fill_rand(arr, SIZE);
	std::cout << "����� ������: " << std::endl;
	print_array(arr, SIZE);
	std::cout << std::endl;
	std::cout << "���������� ������:" << std::endl;
	sort_array(arr, SIZE);
	print_array(arr, SIZE);
	std::cout << std::endl;
	std::cout << "����� ��������� ������: ";
	rez = sum_array(arr, SIZE);
	std::cout << rez << std::endl;
	std::cout << "������� �������������� ��������� ������: ";
	rez = average_array(arr, SIZE);
	std::cout << rez << std::endl;
	std::cout << "����������� �������� � ������: ";
	rez = min_elemet_array(arr, SIZE);
	std::cout << rez << std::endl;
	std::cout << "������������ �������� � ������: ";
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

