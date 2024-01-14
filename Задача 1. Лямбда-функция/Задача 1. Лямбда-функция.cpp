// Задача 1. Лямбда-функция.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	setlocale(LC_ALL, "ru");

	std::vector<int> arr{ 4,7,9,14,12 };

	std::cout << "Входные данные: ";
	for (int num : arr) {
		std::cout << num << " ";
	}
	std::cout << "\n";

	std::for_each(arr.begin(), arr.end(), [](int& num) {
		if (num % 2 > 0) {num *= 3;}
	});

	std::cout << "Выходные данные: ";
	for (int num : arr) {
		std::cout << num << " ";
	}



}

