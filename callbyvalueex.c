// 세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자

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

// 함수 호출의 결과로 num1의 값은 num2에 num2에 저장된 값은 num3에 num3에 저장 된 값은 num1으로 가야 한다. 