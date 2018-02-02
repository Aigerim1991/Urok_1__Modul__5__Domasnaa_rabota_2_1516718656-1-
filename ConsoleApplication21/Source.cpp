#include <stdio.h>
#include<iostream>
#include<locale.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	do
	{
		cout << "Ввести номер задания:" << endl;
		cin >> n;
		switch (n)
		{
		case 1:
		{
			int a[30];
			srand(time(NULL));
			for (int i = 0; i < 30; i++)
			{
				a[i] = -5 + rand() % 30;
				cout << a[i] << "\t";
			}
			cout << endl;
			for (int i = 0; i < 30; i++)
			{
if (a[i] > 0)
				{
					cout <<"Неотрацитальные элементы "<< a[i] << endl;
				}
				else
				{
					cout << "Отрацитальные элементы " << a[i] << endl;
				}
			}
			}
		break;
		case 2:
		{
			int a[20], komanda;
			srand(time(NULL));
			for (komanda = 1; komanda <= 20; komanda++) 
			{
				a[komanda] = 1 + rand() % 30;
				if (a[komanda] > 3)
					cout << "Число команд "<<komanda<<" имеющих больше трех побед: " << a[komanda] << endl;
				else 
				cout << "Число команд " <<komanda<<" имеющих меньше трех побед: " << a[komanda] << endl;
			}

		}		
		break;
		case 3:
		{
			int a[14], kol = 0;
			srand(time(NULL));
			for (int i = 0; i < 14; i++)
			{
				a[i] = 1 + rand() % 65;
				if (a[i] % 2 == 0)
				{
					kol++;
					cout << "Массив: " << i << " количество четных элементов - " << kol << endl;
				}
				else
					cout << "нечетные элементы " << a[i] << endl;
					
			}
		}
		break;
		case 4:
		{
			double a[12];
			int i, sum = 0;
			for ( i = 0; i < 12; i++)
			{
				a[i] = 10 + rand() % 95;
				sum += a[i];
				cout << a[i] << "\t";
					}
			cout<< endl;
			cout <<"Получить новый массив, заменив значение пятого элемента среднеариф.исходного массива:"<< endl;
			a[4] = sum / 12;
			for (i = 0; i < 12; i++)
				cout << a[i] << "\t";
				cout << endl;
		}
		break;
		case 5:
		{
			int a[15], kol = 0;
			for (int i = 0; i < 15; i++)
			{
				a[i] = 10 + rand() % 100;
				cout << a[i] << "\t";
			}
			cout << endl;
			cout << "Количество элементов, значения которых больше первого элемента: " << endl;
			for (int i = 0; i < 15; i++)
			{
				if (a[0] < a[i])
				{
					kol++;
			}
				
			}
			cout << kol << endl;
		}
		break;
		default:
			break;
		}
	} while (n>0);
}