// 함수의 인자로 배열 전달하기. 
// 인자전달의 기본 방식은 값의 복사이다. --> 함수 호출 시 전달 되는 인자의 값은 매개 변수에 복사가 된다. 
// 매개변수로 배열을 선언 할 수 없으므로, 배열을 통째로 넘겨 받으려면 매개변수로 배열을 선언 할 수 있어야 한다. --> 그러나 허용 되지 않음
// 대신 함수 내에서 배열에 접근 할 수 있도록 배열의 주소 값을 전달 하는 것은 가능하다. 
// 배열을 통째로 복사 할 수 없다면 그 주소 값을 인자로 전달하여 접근하도록 유도 하면 된다. 
#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

void ShowArrayElem(int *param, int len) // 배열의 길이 정보를 전달 받도록 정의
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]); // int형 포인터 변수의 이름을 대상으로 배열 형태의 접근을 진행하고 있다. 
	printf("\n");
}

int main()
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	// 길이가 다른 두 배열을 대상으로 ShowArrayElem 함수를 호출 하고 있다. 
	ShowArrayElem(arr1, sizeof(arr1) / sizeof(int)); // 배열의 길이를 계산하는 코드이다! 기억 할 것! 
	ShowArrayElem(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}

// 배열의 값의 변경에 대한 예제

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
	AddArrayElem(arr, sizeof(arr) / sizeof(int), 1); // 값의 변동이 발생하는 부분
	ShowArrayElem(arr, sizeof(arr) / sizeof(int)); // 값의 변동에 대한 출력

	AddArrayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArrayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	return 0;
}