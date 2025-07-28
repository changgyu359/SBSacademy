#include<stdio.h>



void main() 
{

#pragma region 주소 연산자
	// 변수의 주소 값을 변환하는 연산자.

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를 의미하며,
	// 메모리 공간은 1 byte의 크기로 나누어 표현함.

	//int data = 10;

	//printf("data의 주소: %p\n", &data);

	

#pragma endregion

#pragma region scanf_s 함수
	//// 표준 입력 함수로, 여러 종류의 데이터를 다양한 서식에 맞추어 입력해주는 함수.

	//int x = 0;

	//printf("변수 x의 값을 입력해주세요.");

	//// 표준 입력 함수는 입력을 수행할 때 까지 다음 작업으로 넘어갈 수 없습니다.
	//scanf_s("%d", &x);

	//// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며, 
	//// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됨.

	//printf("x변수의 값: %d\n", x);

	//// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관하였다가 
	//// 입력하는 순간 버퍼 안의 내용을 프로그램에 전송함.
#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수

	//int storage = 10; 
	//int variable = 20;

	//int*pointer=&storage;  //int*: 포인터 선언=스토리지의 메모리 주소값

	//// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로, 
	//// 포인터가 가리키는 메모리의 자료형을 선언해주어야 함.
	//printf("storage의 주소:%p\n", &storage);  
	//printf("pointer의 값:  %p\n", pointer);  //포인터가 메모리 주소값으로 선언됐으므로 %p사용, %d하면 이상한값 나옴
	//printf("pointer의 주소:%p\n\n", &pointer);

	////pointer:storage의 주소값
	////*pointer:storage의 주소에 저장된 값

	//*pointer = 99; //메모리 '주소의 값'(주소와 주소의 값은 다름)을 99로 변경
	//printf("storage의 값:%d\n", storage); //역참조된 storage의 값이 99로 변경됨
	//printf("pointer가 가리키는 값:%d\n\n", *pointer);

	//pointer = &variable; //변수 포인터를 바리애이블의 주소로 변경

	//*pointer = 30;
	//printf("varialbe의 값:%d\n", variable);
	//printf("pointer의 값:  %p\n", pointer);
	//printf("pointer가 가리키는 값:%d\n\n", *pointer);

	//// 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 
	//// 포인터 변수에 변수의 주소를 저장하게되면 해당 변수의 시작 주소를 가리키게 됨.

	//printf("int 크기:%u\n", sizeof(int)); // sizeof():괄호 안의 대상의 크기를 출력하는 함수

	//printf("pointer 변수의 크기:%u\n", sizeof(pointer));

	//// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로 정해지며
	//// 한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됨.
#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터.

	//char a = 'A';
	//int b = 10;
	//float c = 3.14f;

	//void* reference = NULL; // 포인터 초기화
	//
	//printf("reference 변수의 값: %p\n\n", reference);

	//reference = &a;  
	//*(char*)reference = 'B';   // 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없음.
	//printf("a 변수의 값: %c\n", a);
	//printf("reference 변수의 값: %p\n\n", reference);

	//reference = &b;
	//*(int*)reference = 50;
	//printf("b 변수의 값: %d\n", b);
	//printf("reference 변수의 값: %p\n\n", reference);

	//reference = &c;
	//*(float*)reference = 45.5f;
	//printf("c 변수의 값: %f\n", c);
	//printf("reference 변수의 값: %p\n\n", reference);
	
	// 범용 포인터로 변수의 메모리에 접근하려면 
	// 범용 포인터가 가리키는 변수의 자료형으로 형 변환해주어야 함.

#pragma endregion

#pragma region 상수 지시 포인터
// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수 없도록 지정되어 있는 포인터.

	//int room1 = 10;
	//int room2 = 20;
	//const int* val = &room1;

	//printf("room1의 메모리주소: %p\n", &room1);
	//printf("val의 값: %p\n", val);

	//// *val = 30; 는 불가능 '*val'값은 상수화되어 변경할 수 없음

	//val = &room2;
	//printf("room2의 메모리주소: %p\n", &room2);
	//printf("val의 값: %p\n", val);

	// 가리키는 대상은 바꿀 수 있지만 대상의 값은 바꿀 수 없음



#pragma endregion

#pragma region 포인터 상수
// 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없는 포인터.


int money1 = 10;
int money2 = 20;
int* const value = &money1;

*value = 125;

printf("money1의 값: %d",money1);

// value = &money2; 는 안됨 'value'값은 상수화되어 변경할 수 없음

#pragma endregion


}
