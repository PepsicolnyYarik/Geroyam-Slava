#include <stdio.h> // подключение библиотек
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian"); // русификация консоли
	int mass[50], n, p, mult = 1; // объявление переменных
	printf("Введите количество членов прогрессии\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf_s("\nmass[%d]:", i); //инциализация членов прогрессии
		scanf_s("%d", &mass[i]);
	}
	printf("Введите число p\n");
	scanf_s("%d", &p);
	while (p == 0)
	{
		printf("Введите другое значение p,так как p не может равняться нулю\n"); // исключение неправильных значений p
		scanf_s("%d", &p);
	}
	for (int i = 0; i < n; i++)
	{
		if (mass[i] % p == 0 && mass[i] != 0)
			mult *= mass[i];  //произведение членов кратных p
	}
	if (mult == 1)
		printf("Произведение членов кратных %d равно 0", p); // если mult остается равен 1, то ни один элемент не подошел
	else
	{
		printf("Произведение членов кратных %d равно %d", p, mult); // вывод ответа
	}
	return 0;
}
