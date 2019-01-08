#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task12()
{
	int A[10] = { 0 };
	printf("Все числа\n");
	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0+ rand() % 100;
		printf("%d\n", A[i]);
	}
	printf("-----------------------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		if (A[i] % 2 == 0)
			printf("%d\n", A[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		if (A[i] % 2 == 1)
			printf("%d\n", A[i]);

	}

}

void task11()
{
	int A[10] = { 0 };
	printf("Все числа\n");
	for (size_t i = 0; i < 10; i++)
	{
		A[i] = -200 + rand() % 400;
		printf("%d\n", A[i]);
	}
	printf("-----------------------------\n");
	printf("Все отрицательные числа:\n");
	for (size_t i = 0; i < 10; i++)
	{
		if (A[i] < 0)
			printf("%d\n", A[i]);
	}
	printf("-----------------------------\n");
	printf("Все эелементы больше 100:\n");
	for (size_t i = 0; i < 10; i++)
	{
		if (A[i] > 100)
			printf("%d\n", A[i]);
	}
	printf("-----------------------------\n");
	printf("Все четные числа:\n");
	for (size_t i = 0; i < 10; i++)
	{
		if (A[i] % 2 == 0)
			printf("%d\n", A[i]);
	}
}

void task10()
{
	int sum = 0;
	int A[30] = { 0 };
	for (size_t i = 0; i < 30; i++)
	{
		A[i] = 1 + rand() % 10;
		printf("%d\n", A[i]);
		sum = sum + A[i];
	}
	printf("sum = %d\n", sum);
	int g;
	printf("Грузоподъёмность грузовика = ");
	scanf_s("%d", &g);
	if (g < sum)
		printf("Грузовик не потянет\n");
	else
		printf("Всё нормально, поехали!\n");
}

void task9()
{
	float sr;
	int sum = 0;
	int A[28] = { 0 };
	for (size_t i = 0; i < 28; i++)
	{
		A[i] = 200 + rand() % 300;
		printf("%d\n", A[i]);
		sum = sum + A[i];
	}
	sr = (float)sum / 28;
	printf("Среднедневное количество осадков в феврале = %f\n", sr);
}

void task8()
{
	int sum = 0;
	int A[12] = { 0 };
	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("%d\n", A[i]);
		sum = sum + A[i];
	}
	printf("sum = %d\n", sum);
}

void task7()
{
	int At;
	int 		Ap = 0 + rand() % 2;
	int Ao;
	float AA;
	int A[10] = {0};
	for (size_t i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 10;
		printf("%d\n", A[i]);
	}
	printf("------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		At = A[i] * 2;
		printf("%d\n", At);
	}
	printf("------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		Ao = A[i] - Ap;
		printf("%d\n", Ao);
	}
	printf("------------\n");
	for (size_t i = 0; i < 10; i++)
	{
		AA = (float)A[i] / (float)A[0];
		printf("%f\n", AA);
	}
}

void task6()
{
	int sqrtind;
	int ind;
	int A[100] = { 0 };
	for (size_t i = 0; i < 100; i++)
	{
		A[i] = 0 + rand() % 100;
	}
	printf("Квадратный корень какой ячейки вы хотите узнать?\n");
	scanf_s("%d", &ind);
	printf("%d\n", A[ind]);
	sqrtind = sqrt(A[ind]);
	printf("Квадртаный корень %d ячейки равен %d\n", ind, sqrtind);
}

void task5()
{
	int A[5] = { 0 };
	for (size_t i = 0; i < 5; i++)
	{
		A[i] = 0 + rand() % 100;
		printf(" %d\n", A[i]);
	}
	printf("---------------------\n");
	for (size_t i = 4; i < -1; i--)
	{
		printf(" %d\n", A[i]);
	}
}

void task4()
{
	int ind;
	int A[100] = { 0 };

	for (size_t i = 0; i < 100; i++)
	{
		A[i] = 0 + rand() % 100;
	}
	while (true)
	{
		printf("Введите индекс массива:");
		scanf_s("%d", &ind);
		if (ind > 99 || ind<0)
			printf("ошибка\n");
		else
		printf("Ячейка с индексом %d имеет значение %d\n", ind, A[ind]);
	}
}

void task3()
{
	int A[12];
	int c = 1;

	for (size_t i = 0; i < 12; i++)
	{
		A[i] = 163 + rand() % 27;
		printf("Рост %d человека равен = %d\n",c,A[i]);
		c++;
	}
	printf("%d", A[0]);
}

void task2()
{
	int A[10];

	for (size_t i = 0; i < 10; i++)
	{
		printf("Введите значение %d ячейки", i);
		scanf_s("%d", &A[i]);
	}

	for (size_t i = 0; i < 10; i++)
	{
		printf("Ячейка %d имеет значение = %d\n", i,A[i]);
	}
}

void task1()
{
	int A[8];
	A[0] = 37;
	A[1] = 0;
	A[2] = 50;
	A[3] = 46;
	A[4] = 34;
	A[5] = 46;
	A[6] = 0;
	A[7] = 13;
	
}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task, flag;

	do
	{
		printf("Введите номер задачи:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		case 7:task7(); break;
		case 8:task8();break;
		case 9:task9(); break;
		case 10:task10(); break;
		case 11:task11(); break;
		case 12:task12(); break;
		}
		printf("Хотите продолжить?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}