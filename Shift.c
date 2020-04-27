/*******************************************************************************
*
* Copyright (C) 2020 TUSUR, FB
*
* File              : Shift.c
* Compiler          : Microsoft Visual Studio Professional 2019
* Version           : 16.3.8
* Last modified     : 27.04.2020
*
* Support mail      : 7361smi@gmail.com
*
* Description       : ��������� ��� ���������� ������ ����� � ������.
*
********************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <stdint.h>

int main(void)
{
	int N = 10;
	int A[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; //�������� ������
	int shift;
	int path;
	printf("Array for shift:  0 1 2 3 4 5 6 7 8 9 \n");
	printf("\n");
	printf("Enter shift size: \n");
	scanf("%d", &shift); //����� ������� ������
	printf("\n");
	printf("Enter the direction of the shift (1 - left , 2 - right): \n");
	scanf("%d", &path); //����� ����������� ������
	printf("\n");
	if (path == 1)
	{
		int tmp1;
		for (int j = 0; j < shift; ++j) //���� ������ �����
		{
			tmp1 = A[0];
			for (int i = 0; i < N - 1; ++i) //������ �� �������
			{
				A[i] = A[i + 1]; //�������� ����� ������� ��������� �������� ����������
			}
			A[N - 1] = tmp1; // ��������� ���������� ����� �������� �������
		}
		for (int i = 0; i <= N - 1; ++i)
		{
			printf("%d ", A[i]); //����� ����������
		}
		printf("\n");
		system("pause");
	}
	if (path == 2)
	{
		int tmp1;
		for (int j = 0; j < shift; ++j) //���� ������ ������
		{
			tmp1 = A[N - 1];
			for (int i = N - 1; i > 0; --i) //������ �� ������� (� ����� � ������)
			{
				A[i] = A[i - 1]; //�������� ����� ������� ��������� �������� �����������
			}
			A[0] = tmp1; //��������� ������� ����� �������� ����������
		}
		for (int i = 0; i < N; i++)
		{
			printf("%d ", A[i]); //����� ����������
		}
		printf("\n");
		system("pause");
	}

	return 0;
}