// Pointer 대상의 const선언 
// const의 선언이란 값의 변경을 불가하게 하는 선언이다! 
// pointer에 const를 선언한다는 의미는 포인터 변수 ptr를 이용하여 ptr이 가르키는 변수에 저저아된 값을 변경하는 것을 허용하지 않겠다는 의미이다. 

#include <stdio.h>
#define _CRT_SECURE_NO_WARNNINGS
// The example of the pointers const
int main()
{
	int num = 20;
	const int *ptr = &num; // pointer변수 ptr에 int를 연결하고 pointer에 const를 연결 하였다. 
	*ptr = 30; // 컴파일 에러가 발생하게 된다! --> 배열에 const를 걸어서 변경을 불가능하게 하였는데, 배열에 변경을 시도 했기 때문이다.  
	num = 40; // 컴파일 성공!
	// const 선언은 포인터 변수의 이름 앞에 올 수도 있다. 
	int*const ptr = &num; // 이러한 선언의 경우 포인터 변수 ptr은 상수가 된다. --> 한번 주소값이 저장되면 변경이 불가하며, 
	                                                                           // 한번 가르킨 변수를 끝까지 가르켜야 한다. 
	// Eample
	int num1 = 20;
	int num2 = 30;
	int *const ptr = &num1;
	ptr = &num2; // 컴파일 에러 발생! --> 바로 윗 문단에서 ptr이 num1을 가르킨다고 지정을 했는데 여기서 변경을 시도 했기 떄문! 
	*ptr = 40; // 컴파일 성공!!

	
	return 0;
}

// const는 cpp가 생기면서 편입된 선언이다. 하지만 코딩 하면서 컴파일러가 잡지 못하는 에러 발생 요인 중 하나이니, 유의해서 프로그래밍을 해야 한다! 