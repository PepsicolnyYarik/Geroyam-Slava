#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian"); // русификация консоли
	int mass[50], n, summa=0, kol=0;
	printf("Введите количество членов последовательности\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("\nmass[%d]:", i); //инциализация членов прогрессии
		scanf_s("%d", &mass[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (mass[i] % 5 == 0 && mass[i] % 7 != 0)   //проверка членов
		{
			kol = kol + 1;            //определяем количество подходящих членов
			summa = summa + mass[i];      //считаем их сумму
		}
	}
	printf("Количество членов последовательности %d\nСумма членов %d", kol, summa); //вывод ответа
	return 0;
}
