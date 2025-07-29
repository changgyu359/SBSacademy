#include<stdio.h>



void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합.

	//int baeyeol[5];


	//// 배열의 경우 첫 번째 원소는 0부터 시작.

	////baeyeol[0] = 10;
	////baeyeol[1] = 20;
	////baeyeol[2] = 30;
	////baeyeol[3] = 40;
	////baeyeol[4] = 50; 각 리스트에 일일히 넣어주는 방식 하지만 비효율적인 방식

	//for (int i = 0; i < 5; i++)
	//{
	//	baeyeol[i] = (i + 1) * 10;

	//	printf("list[%d] = %d\n", i, baeyeol[i]);
	//}
	
	// 배열의 메모리 공간은 프로그램이 실행되는 동안 변경할 수 없다.

	//int array[] = { 1,2,3,4,5,6,7,8,9,10 };

	//int size = sizeof(array) / sizeof(array[0]); // array[0] : 첫번째 값이므로 
	//											 // 다른 자료형들에서도 사용가능

	//for (int i = 0; i < size; i++)
	//{
	//	printf("array[%d] = %d\n", i,array[i]);
	//}
	//
	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서 설정한 요소에 따라 배열의 크기가 결정됨.

	// 배열은 연속적인 메모리 공간을 가지고 있으며, 배열의 이름은 배열의 시작 주소를 가리킴.
	int array[] = { 10,20,30,40,50 };

	int* pointer = &array;
	int size = sizeof(array) / sizeof(array[0]);

	printf("array[0]의 메모리 주소 = %p\n", pointer);
	printf("array[1]의 메모리 주소 = %p\n\n", pointer+1);

	printf("1차 array의 배열\n", pointer);
	for (int i = 0; i < size; i++)
	{
			printf("array[%d] = %d\n", i, array[i]);
	}
	printf("\n", pointer);
	printf("2차 array의 배열\n", pointer);
	for (int i = 0; i < size; i++)
	{
		pointer = &array[i];
		*pointer = (i + 1) * 100;
			printf("array[%d] = %d\n", i, array[i]);
	}


#pragma endregion


}
