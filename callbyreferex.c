// 변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고, 이를 호출하는 main 함수를 작성해 보자 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void Swap3(int *ptr1, int *ptr2, int *ptr3)
{
	int temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
}

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);

	printf("%d %d %d", num1, num2,num3);
	return 0;
}