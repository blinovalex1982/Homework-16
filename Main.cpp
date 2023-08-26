#include <iostream>


double mean(int num1, int num2) {
	return double(num1 + num2)/2;
}

void mean_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
	double sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	std::cout  << "Среднее арифметическое массива: " << sum / length << ' ';
}

void powers(int N, int M) {
	long long product_num;
	product_num = 1;
	for (int i = 0; i <= M; i++) {
		std::cout << product_num << ' ';
		product_num = product_num * N;

	}
}
void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << "\b\b" << std::endl;
}


void positive_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0)
			std::cout << arr[i] * -1 << ' ';
		else
			std::cout << arr[i] << ' ';
	}
}


int main() {
	setlocale(LC_ALL, "RU");

	// Задача 1. Среднее арифметическое двух чисел

	int a, b;
	std::cout << "Задача 1. \nВведите первое число -> ";
	std::cin >> a;
	std::cout << "Введите второе число -> ";
	std::cin >> b;
	std::cout << "Среднее арифм. mean = " << mean(a, b) << std::endl << std::endl;

	// Задача 2. Среднее арифметическое массива
	
	std::cout << "Задача 2. \nМассив: ";
	const int size = 5;
	int arr[size]{ 20, 30, 15, 41, 17 };
	//std::cout << "Среднее арифметическое массива: ";
	mean_arr(arr, size);
	std::cout << std::endl << std::endl;

	// Задача 3. Степени числа
	std::cout << "Задача 3. \nВведите число N возводимое в степень M: ";
	int n;
	std::cin >> n;
	std::cout << "Введите степень M числа N: ";
	int m;
	std::cin >> m;
	std::cout << "Число N в степени от 0 до М = ";
	powers(n, m);
	std::cout << std::endl << std::endl;


	// Задача 4. 

	std::cout << "Задача 4. \nМассив:\n";
	const int size1 = 10;
	int arr1[size1]{1, -2, 3, -4, 5, -6, 7, -8, 9, -10};
	print_arr(arr1, size1);
	std::cout << "Массив положительных чисел: \n";
	positive_arr(arr1, size1);
	std::cout << std::endl << std::endl;

	return 0;
}