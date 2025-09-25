#include <stdio.h>
#include <locale.h>
#define D 2.54
#define F 2.32

int №1();
int №2();
int №3();

int main()
{
	setlocale(LC_ALL, "RUS");
	№1();
}

int №1()
{
	int num, num2;
	puts("********************************************");
	puts("Введите число");
	scanf("%d", &num);
	printf("Введено число %d\n", num);
	puts("********************************************");
	puts("Введите второе число");
	scanf("%d", &num2);
	printf("Введено число %d\n", num2);
	puts("********************************************");
	printf("Сумма: %d + %d = %d\n", num, num2, num + num2);
	puts("********************************************");
	printf("Разность: %d - %d = %d\n", num, num2, num - num2);
	puts("********************************************");
	printf("Произведение: %d * %d = %d\n", num, num2, num * num2);
	puts("********************************************");
	printf("Частное: %d / %d = %d\n", num, num2, num / num2);
	puts("********************************************");
	printf("Остаток от деления: %d %% %d = %d\n", num, num2, num % num2);
	puts("********************************************");
	return 0;
}

int №2()
{
	int dym, pulgada;
	float result, result2;
	puts("Введите значение для расчета");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d английских дюймов – это % .1f см\n", dym, result);
	puts("Введите значение для расчета");
	scanf("%d", &pulgada);
	result2 = F * pulgada;
	printf("%d испанских дюймов – это % .1f см\n", pulgada, result2);
	return 0;
}

int №3()
{
	float A, B;
	puts("Введите значение для A");
	scanf("%f", &A);
	puts("\nВведите значение для B");
	scanf("%f", &B);
	puts("___________________\n");
	printf("|A*B|A+B|A-B|\n");
	puts("___________________\n");
	printf("|%1.0f*%-1.0f|%1.0f+%-1.0f|%1.0f-%-1.0f|\n", A, B, A, B, A, B);
	puts("___________________\n");
	printf("|%2.0f|%2.0f|%2.0f|\n", A*B, A+B, A-B);
	return 0;
}