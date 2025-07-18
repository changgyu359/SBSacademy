#include <stdio.h>

void main()
{
#pragma region 산술 연산자
	/*1. 변수 = 변수 + 변수

	int x1 = 3;
	int x2 = 5;
	int x3 = x1 + x2;

	printf("%d = %d + %d\n", x3,x1,x2);

	 2. 변수 = 변수 - 리터럴 상수

	int x4 = 20;
	int x5 = x4 - 7;

	printf("%d = %d - 7\n", x5, x4);

	 3. 변수 = 변수 * 심볼릭 상수

	int x6 = 4;
	const int x7 = 10;
	int x8 = x6 * x7;

	printf("%d = %d * %d\n", x8, x6, x7);


	 4. 변수 = 리터럴 상수 / 리터럴 상수 *가능한 정수로 떨어지도록

	int x9 = 20 / 4;

	printf("%d = 20 / 4\n", x9);


	 5. 변수 = 심볼릭 상수 % 리터럴 상수

	const int x10 = 23;
	int x11 = x10 % 12;

	printf("%d = %d %% 12", x11, x10);*/



	// 이걸 좀 더 이쁘게 정리하려면
	// 1. 결과 값으로 사용할 변수들을 먼저 지정
	// 2. 수식에 사용할 변수와 심볼릭 상수 지정
	// 3. 결과 값에 해당하는 수식을 작성
	// 4. 각 결과 변수들을 출력하기만 하면 끝


	//int storage1 = 0;
	//int storage2 = 0;
	//int storage3 = 0;
	//int storage4 = 0;
	//int storage5 = 0;

	//int x = 10;
	//int y = 5;
	//int z = 1;
	//int w = 10;

	//const int constant = 5;

	//// 1. 변수 = 변수 + 변수
	//storage1 = x + y;

	//// 2. 변수 = 변수 - 리터럴 상수
	//storage2 = z - 1;

	//// 3. 변수 = 변수 * 심볼릭 상수
	//storage3 = w * constant;

	//// 4. 변수 = 리터럴 상수 / 리터럴 상수
	//storage4 = 20 / 5;

	//// 5. 변수 = 심볼릭 상수 % 리터럴 상수
	//storage5 = constant % 5;

	//printf("storage1의 값 : %d\n", storage1);
	//printf("storage2의 값 : %d\n", storage2);
	//printf("storage3의 값 : %d\n", storage3);
	//printf("storage4의 값 : %d\n", storage4);
	//printf("storage5의 값 : %d\n", storage5);


#pragma endregion



#pragma region 비트
	 //데이터를 나타내는 최소의 단위이며,
	 //0또는 1의 조합으로 논리 계산을 수행하는 단위이다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	 //1byte에 2진수로 저장된 값을 2의 제곱으로 나타낸다.

	 //각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한 다음
	 //각각의 비트를 모두 더하여 10진수로 나타낸다.

#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자.

#pragma region AND 연산자
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자.

	//int storage1 = 10;
	//int storage2 = 6;

	//printf("storage1 & storage2 = %d\n",storage1 & storage2);
	//


#pragma endregion

#pragma region or 연산자
	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자.

	//int storage3 = 8;  // 0000 1000
	//int storage4 = 12; // 0000 1100 
	//                   // 0000 1100 = 12
	//
	//printf("storage3 | storage4 = %d\n", storage3 | storage4);

#pragma endregion

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고,
	// 서로 다르면 1을 반환하는 연산자.

	//int storage5 = 6;   //0000 0110
	//int storage6 = 15;  //0000 1111
	//                    //0000 1001

	//printf("storage5 ^ storage6 = %d\n", storage5 ^ storage6);
#pragma endregion

#pragma region NOT 연산자
	// 하나의 비트를 반전시키는 연산자

	//int storage7 = 13; //0000 1101
	//                   //1111 0010 ?

	//printf("~sotrage7 = %d\n ", ~storage7);

	// 첫 번째 비트는 부호를 나타내며,
	// 첫 번째 비트에 1이 있다면 값은 음수이다.





#pragma endregion


#pragma endregion

#pragma region 시프트 연산자
// 비트를 특정한 위치로 정해진 수만큼 이동시키는 연산자.
// <<,>>를 사용함

//int data = 5;
//int shift = data << 2;
//
//printf("shift의 값 : %d\n", shift);
//
// shift = data >> 1; //shift를 이미 지정했으니 다시 지정할 필요 없음,
//                    //변수를 재지정하여 새로운 값을 획득
//                    //shift를 재지정했으므로 data에는 변화 없음               
//
//printf("shift의 값 : %d\n", shift);

#pragma endregion


#pragma endregion



}