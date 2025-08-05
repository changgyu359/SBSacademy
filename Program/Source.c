#include<stdio.h>
#include<stdlib.h>





int main()
{
#pragma region 동적 할당
	// 프로그램을 실행하는 중에 필요한 만큼 메모리를 할당하는 작업.

	int* pointer = (int*) malloc(4);

	*pointer = 10;

	printf("pointer가 가리키는 값:%d\n", *pointer);
	
	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를 변경할 수 있으며,
	// 동적으로 메모리의 크기를 할당할 때 바이트 단위로 지정함.
	
	free(pointer);
	// 동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로,
	// 사용이 끝나면 직접 해제해주어야 함.


	// 과제 동적배열 만들기
	// 1.int를 사용해 3개짜리 배열을 만든다.
	// 2.pointer를 동적배열에 연결
	// 3.각 배열에 차례로 10,20,30을 넣는다.
	// 4.출력 해보고 포인터 해제

	pointer = malloc(3);

	for (int i = 0, i < 3; i++)
	{

	}

#pragma endregion


	return 0;
}
