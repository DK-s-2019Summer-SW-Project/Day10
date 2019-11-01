// Call by value vs call by reference
// value�� ���� ���� ���� reference�� �ּ� ���� ����
#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

// The example of call by value 

void Swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1, n2: %d %d\n", n1, n2);
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	printf("num1, num2: %d %d\n", num1, num2);

	Swap(num1, num2); // num1�� num2�� ����� ���� ���� ���� �Ǳ⸦ ���!
	printf("num1, num2: %d %d", num1, num2);

	return 0;
}

// The example of call by reference --> �ּ� ���� �����ϴ� ������ �Լ� ȣ���̴�. 

void Swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = ptr2;
	*ptr2 = temp;
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d\n", num1, num2);

	Swap(&num1, &num2); // ���Ⱑ call by value���� �������̴�! ���������� �ּҸ� �����ϴ��� �� �ϴ����� ���̷� Swap�� ����� �޶�����. 
	printf("num1 num2 : %d %d\n", num1, num2);

	return 0;
}

//scanf�� &�� ���̴� ���� ���� �ּҰ��� �ҷ����� �����̴�
// %s, ���ڿ��� ��� ���ڿ� ��ü�� �迭�� �ּ� ���̹Ƿ� �տ� &�� ���̸� ������ �߻��ϰ� �ȴ�. 