﻿#include<stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문.

#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자.

	// 전위 증감 연산자는 변수의 값을 증감시킨 후에 연산을 수행.

	//int a = 0;
	//int b = 0;

	//b = ++a;

	//

	//printf("첫번째-a:%d,b:%d\n", a, b);
	//

	//b = --a;

	//printf("두번째-a:%d,b:%d\n", a, b);


	// 후위 증감 연산자는 연산을 수행한 다음 변수의 값을 증감시킵니다.

	//int preY = 0;
	//int Y = 0;

	//Y = preY++;
	//
	//printf("preY 변수를 후위 증가한 값:%d\n", preY);
	//printf("Y 변수의 값:%d\n", Y);

	//Y = preY--;

	//printf("preY 변수를 후위 감소한 값:%d\n", preY);
	//printf("Y 변수의 값:%d\n", Y);


#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문.


	//for (int i = 0; i < 5;++i)
	//{
	//	printf("아직 5번 실행하지 않았습니다.\n");

	//}
	//
	//printf("5번 실행되었습니다.");


#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문.

	// while문의 경우 위에서 아래로 실행되며, 아래에 있는 명령문의 실행이 다 끝나면
	// 다시 위에있는 명령문으로 돌아가서 반복하는 구조.

	//int count = 5;

	//while (count>0)
	//{
	//	printf("count의 값:%d\n", count);
	//	count--;
	//}
#pragma endregion

#pragma region do-while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문.

	//int life = 100;

	//do
	//{
	//	printf("생존\n");
	//
	//} 
	//while (life < 0);
#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문.
	// 과제: 1에서부터 10까지, 그런데 3의 배수는 출력되지 않게 만들기

	//int x = 1;

	//for (int i = 1; i <= 10; i++)
	//{
	//	if (i % 3 == 0)
	//	{
	//		continue;
	//	}
	//		
	//				printf("%d ",i);

	//}

#pragma endregion

#pragma region 중첩 반복문
	// 반복문 안에 새로운 반복문이 들어있는 형태의 반복문.

//for (int i = 0; i< 3;++i) 
//{
//	printf("out...\n");
//	for (int j = 0; j < 3; ++j)
//	{
//		printf("in...\n");
//	}
//}
#pragma endregion



#pragma endregion

}
