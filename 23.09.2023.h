#include <iostream>
#include"Array.h"

using namespace std;

int main()
{
	//Завдання 1
	//В одновимірному масиві, заповненому випадковими числами, визначити мінімальний і максимальний елементи.

	/*int size = 10;
	Array<int> arr(size);
	arr.set(1, 99);
	arr.print();

	int min = arr[0];
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;*/

	//Завдання 2
	//Користувач вводить прибуток фірми за рік(12 місяців).Потім користувач вводить діапазон(наприклад, 3 і 6 — пошук між 3 - м і 6 - м місяцем).
	//Необхідно визначити місяць, у якому прибуток був максимальним, і місяць, у якому прибуток був мінімальним, з урахуванням обраного діапазону.


	////Користувач вводить прибуток фірми за рік(12 місяців)
	//Array<int> arr(12);
	//for (size_t i = 0; i < 12; i++)
	//{
	//	int a;
	//	cout << i + 1 << " month: ";
	//	cin >> a;
	//	arr.insert(a, i);
	//}
	//arr.print();

	////Потім користувач вводить діапазон
	//cout << "Range : ";
	//int first, last;

	//bool Tr = true;
	//while (Tr == true)
	//{
	//	cin >> first >> last;
	//	if (first <= 12 || last <= 12)
	//	{
	//		Tr = false;
	//	}
	//}
	//if (first > last)
	//{
	//	int b;
	//	b = first;
	//	first = last;
	//	last = b;
	//}

	////Необхідно визначити місяць, у якому прибуток був максимальним, і місяць, у якому прибуток був мінімальним, з урахуванням обраного діапазону.
	//int Min = arr[first - 1];
	//int Max = arr[first - 1];
	//int MinIndex = first;
	//int MaxIndex = first;
	//for (size_t i = 0; i < last - first + 1; i++)
	//{
	//	if (arr[first - 1 + i] < Min)
	//	{
	//		Min = arr[first - 1 + i];
	//		MinIndex = first + i;
	//	}
	//	if (arr[first - 1 + i] > Max)
	//	{
	//		Max = arr[first - 1+ i];
	//		MaxIndex = first + i;
	//	}
	//}
	//if (Max == Min)
	//{
	//	cout << "all months are the same" << endl;
	//}
	//else
	//{
	//	cout << "Min was : " << MinIndex << " month, max was : " << MaxIndex << " month" << endl;
	//}
	Array<int> arr(20);
	arr.set(1, 10);
	arr.print();
	arr.remove(3);
	arr.print();

}
