#include <stdio.h>
#include <locale.h>
#define D 2.54
#define F 2.32

int �1();
int �2();
int �3();

int main()
{
	setlocale(LC_ALL, "RUS");
	�1();
}

int �1()
{
	int num, num2;
	puts("********************************************");
	puts("������� �����");
	scanf("%d", &num);
	printf("������� ����� %d\n", num);
	puts("********************************************");
	puts("������� ������ �����");
	scanf("%d", &num2);
	printf("������� ����� %d\n", num2);
	puts("********************************************");
	printf("�����: %d + %d = %d\n", num, num2, num + num2);
	puts("********************************************");
	printf("��������: %d - %d = %d\n", num, num2, num - num2);
	puts("********************************************");
	printf("������������: %d * %d = %d\n", num, num2, num * num2);
	puts("********************************************");
	printf("�������: %d / %d = %d\n", num, num2, num / num2);
	puts("********************************************");
	printf("������� �� �������: %d %% %d = %d\n", num, num2, num % num2);
	puts("********************************************");
	return 0;
}

int �2()
{
	int dym, pulgada;
	float result, result2;
	puts("������� �������� ��� �������");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d ���������� ������ � ��� % .1f ��\n", dym, result);
	puts("������� �������� ��� �������");
	scanf("%d", &pulgada);
	result2 = F * pulgada;
	printf("%d ��������� ������ � ��� % .1f ��\n", pulgada, result2);
	return 0;
}

int �3()
{
	float A, B;
	puts("������� �������� ��� A");
	scanf("%f", &A);
	puts("\n������� �������� ��� B");
	scanf("%f", &B);
	puts("___________________\n");
	printf("|A*B|A+B|A-B|\n");
	puts("___________________\n");
	printf("|%1.0f*%-1.0f|%1.0f+%-1.0f|%1.0f-%-1.0f|\n", A, B, A, B, A, B);
	puts("___________________\n");
	printf("|%2.0f|%2.0f|%2.0f|\n", A*B, A+B, A-B);
	return 0;
}