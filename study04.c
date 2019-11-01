// Call by value vs call by reference
// value는 실제 값을 전달 reference는 주소 값을 전달
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

	Swap(num1, num2); // num1과 num2에 저장된 값이 서로 변경 되기를 기대!
	printf("num1, num2: %d %d", num1, num2);

	return 0;
}

// The example of call by reference --> 주소 값을 전달하는 형태의 함수 호출이다. 

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

	Swap(&num1, &num2); // 여기가 call by value와의 차이점이다! 직접적으로 주소를 접근하느냐 안 하느냐의 차이로 Swap의 결과가 달라진다. 
	printf("num1 num2 : %d %d\n", num1, num2);

	return 0;
}

//scanf에 &을 붙이는 이유 또한 주소값을 불러오기 위함이다
// %s, 문자열의 경우 문자열 자체가 배열의 주소 값이므로 앞에 &를 붙이면 에러가 발생하게 된다. 