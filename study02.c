// 포인터 변수로 이루어진 배열 --> 포인터 배열
// 포인터 변수도 변수 이므로 배열을 선언 할 수 있다! --> 포인터 변수로 이뤄진, 그래서 주소 값의 저장이 가능한 배열을 가리켜 포인터 배열이라고 한다
// int arr *1[20] --> 길이가 20인 int 형 포인터 배열 arr1 이렇게 선언을 한다. 
// char *strarr[3] // 길이가 3인 char형 포인터 배열
#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int *arr[3] = { &num1, &num2, &num3 };

	printf("%d\n", *arr[0]);
	printf("%d\n", *arr[1]);
	printf("%d\n", *arr[2]);
	// 보통 배열과 다를바가 없지만 주소 값을 저장 할 수 있다는 특징이 있다!

	// 문자열을 저장하는 배열
	char *strarr[3] = { "simpe", "string", "array" };
	printf("%s\n", strarr[0]);
	printf("%s\n", strarr[1]);
	printf("%s\n", strarr[2]);
	// "" 이렇게 묶어서 표현되는 문자열은 그 형태에 상관 없이 메모리 공간에 저장된 후 그 주소 값이 반환 된다. 
	// 앞서 보인 int형 포인터 배열의 그림과 비교해 보면, 구조적인 차이가 없음을 알 수 있다. 결구 포인터 배열은 가리키는 대상의 차이는 있지만, 다른 메모리 공간을 
	// 가르키는 점에서는 동일하다. 
	return 0;
}