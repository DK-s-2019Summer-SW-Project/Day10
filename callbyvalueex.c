// �� ������ ����� ���� ���� �ڹٲٴ� �Լ��� �����غ���

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
int SquareByvalue(int num)
{
	return num*num;
}

void SquareByReference(int *ptr)
{
	int num = *ptr;
	*ptr = num *num;
}

int main()
{
	int num = 10;
	printf("%d\n", SquareByvalue(num));
	SquareByReference(&num);
	printf("%d\n", num);

	return 0;
}

// �Լ� ȣ���� ����� num1�� ���� num2�� num2�� ����� ���� num3�� num3�� ���� �� ���� num1���� ���� �Ѵ�. 