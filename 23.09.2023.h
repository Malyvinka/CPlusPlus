#include <iostream>
#include"Array.h"

using namespace std;

int main()
{
	//�������� 1
	//� ������������ �����, ����������� ����������� �������, ��������� ��������� � ������������ ��������.

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

	//�������� 2
	//���������� ������� �������� ����� �� ��(12 ������).���� ���������� ������� �������(���������, 3 � 6 � ����� �� 3 - � � 6 - � ������).
	//��������� ��������� �����, � ����� �������� ��� ������������, � �����, � ����� �������� ��� ���������, � ����������� �������� ��������.


	////���������� ������� �������� ����� �� ��(12 ������)
	//Array<int> arr(12);
	//for (size_t i = 0; i < 12; i++)
	//{
	//	int a;
	//	cout << i + 1 << " month: ";
	//	cin >> a;
	//	arr.insert(a, i);
	//}
	//arr.print();

	////���� ���������� ������� �������
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

	////��������� ��������� �����, � ����� �������� ��� ������������, � �����, � ����� �������� ��� ���������, � ����������� �������� ��������.
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
