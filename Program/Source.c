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
	//int array[] = { 10,20,30,40,50 };

	//int* pointer = &array;
	//int size = sizeof(array) / sizeof(array[0]);

	//printf("array[0]의 메모리 주소 = %p\n", pointer);
	//printf("array[1]의 메모리 주소 = %p\n\n", pointer+1);

	//*pointer = 20;
	//printf("array[0]의 값 : %d\n", array[0]);
	//pointer = &array[1];
	//*pointer = 40;
	//printf("array[1]의 값 : %d\n", array[1]);


#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합.

	//const char* character = "packet";
	//char title[] = { "League of Legend" };
	////*character = 'e';

	//printf("character의 값:%p\n", character);
	//printf("character가 가리키는 문자열: %s\n", character);
	//printf("character[3] 의 값: %c\n", character[3]);

	//character = "bit";

	//// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며
	//// 문자열 상수는 데이터 영역의 읽기 전용 공간에 저장되기 때문에 문자열의 값을 변경할 수 없다.

	//printf("character의 값:%p\n", character);
	//printf("character가 가리키는 문자열: %s\n", character);

	//// 문자열은 공백도 함께 메모리 공간에 포함되며, 마지막 메모리 공간의 요소에 문자열의
	//// 끝을 알려주는 제어 문자가 추가됨.
	//
	//printf("title의 값: %s\n", title);
	//title[6] = '\0';
	//printf("title의 값: %s\n", title);
	
	// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 있지만,
	// 문자 배열 사이에 무효의 문자를 넣게 되면 무효의 문자까지만 출력됨.
#pragma endregion

#pragma region (2)차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열.

	// 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은 행을 의미하고, 뒤에 있는 배열은 열을 의미.

	int array2D[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9},
		
	};

	for(int i=0;i<3;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", array2D[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		printf("\n");
		for (int j = 0; j < 3; j++)
		{
			printf("%d", array2D[i][j]);
		}
	}

	

#pragma endregion

}
