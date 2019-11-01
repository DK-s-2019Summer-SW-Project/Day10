// 상수 형태의 문자열을 가르키는 포인터 
// NULL문자를 삽입하는 방법은 2가지가 존재.
// 1. 배열을 이용하여 NULL문자를 삽입하는 것이고
// 2. char pointer형을 이용하여 삽입 하는 것이다. 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS

int main()
{
	char str1[] = "my string"; // 변수 형태의 문자열 --> 배열의 길이는 자동적으로 계산 된다. 내용을 변경 할 수 있다!
	char *str2 = "your string"; // 상수 형태의 문자열 0 --> 내용을 변경 할 수 없다! 
	// 이렇게 선언을 하면 메모리 공간에 문자열 "Your string"이 저장 되고, 문자열의  첫번째 문자 Y의 주소 값이 반환된다. 그리고 반환 값이 포인터 변수 str에 저장 된다.
	// 그래서 str2를 char형으로 선언을 한 것 이다. 

	// 이렇듯 str1은 그 자체로 문자열 전체를 저장 하는 배열이고, str2는 메모리상에 자동으로 저장된 문자열 "Your string"의 첫번째 문자를 단순히 가르키고 있는 포인터 변수이다. 
	// 둘다 문자열의 시작 주소 값을 가지고 있다는 공통점을 가지고 있지만 str1은 m을 못 벗어나지만 str2는 다른 값을 지정 할 수 있다. 

	printf("%s %s\n", str1, str2);

	str2 = "our string"; // 가르키는 대상을 변경 --> 포인터 변수 이기 때문에 변경이 가능하다! 
	printf("%s %s", str1, str2);

	str1[0] = 'X'; // 문자열 변경 성공!
	str2[0] = 'X'; // 문자열 변경 실패!
	printf("%s %s", str1, str2);

	return 0;
}