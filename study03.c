// �Լ��� ���ڷ� �迭 �����ϱ�. 
// ���������� �⺻ ����� ���� �����̴�. --> �Լ� ȣ�� �� ���� �Ǵ� ������ ���� �Ű� ������ ���簡 �ȴ�. 
// �Ű������� �迭�� ���� �� �� �����Ƿ�, �迭�� ��°�� �Ѱ� �������� �Ű������� �迭�� ���� �� �� �־�� �Ѵ�. --> �׷��� ��� ���� ����
// ��� �Լ� ������ �迭�� ���� �� �� �ֵ��� �迭�� �ּ� ���� ���� �ϴ� ���� �����ϴ�. 
// �迭�� ��°�� ���� �� �� ���ٸ� �� �ּ� ���� ���ڷ� �����Ͽ� �����ϵ��� ���� �ϸ� �ȴ�. 
#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void ShowArrayElem(int *param, int len) // �迭�� ���� ������ ���� �޵��� ����
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]); // int�� ������ ������ �̸��� ������� �迭 ������ ������ �����ϰ� �ִ�. 
	printf("\n");
}

int main()
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	// ���̰� �ٸ� �� �迭�� ������� ShowArrayElem �Լ��� ȣ�� �ϰ� �ִ�. 
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int)); // �迭�� ���̸� ����ϴ� �ڵ��̴�! ��� �� ��! 
	ShowArrayElem(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}

// �迭�� ���� ���濡 ���� ����

void ShowArrayElem(int *param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d", param[i]);
	printf("\n");
}

void AddArrayElem(int *param, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;
}

int main()
{
	int arr[3] = { 1, 2, 3 };
	AddArrayElem(arr, sizeof(arr) / sizeof(int), 1); // ���� ������ �߻��ϴ� �κ�
	ShowArrayElem(arr, sizeof(arr) / sizeof(int)); // ���� ������ ���� ���

	AddArrayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArrayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	return 0;
}