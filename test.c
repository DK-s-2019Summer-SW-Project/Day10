// 변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고, 이를 호출하는 main 함수를 작성해 보자 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void Swap3(int *ptr1, int *ptr2, int *ptr3)
{
	/*int temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;*/ // 내가 생각했던 알고리즘의 반대 방향으로 출력 값이 나온다. 즉 이런 형식의 코딩을 할 때는 역순으로 알고리즘을 생각하고 코딩을 해야 할 것 같다. 

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp;

}

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);

	printf("%d %d %d\n", num1, num2, num3);
	return 0;
}
// 함수 호출의 결과로 num1의 값은 num2에 num2에 저장된 값은 num3에 num3에 저장 된 값은 num1으로 가야 한다. 