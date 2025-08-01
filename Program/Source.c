#include<stdio.h>

void initialize()
{
	printf("initialize...\n");
}

int max_health()
{
	
	return 10;
}

void criticalize(int x)
{
	printf("크리티컬! 2배피해! %d\n", 2*x);
}

void print_status(char grade, int height, float temperature)
{
	printf("등급 : %c\n", grade);
	printf("키 : %d\n", height);
	printf("체온 : %f\n", temperature);
}

void swap(int* a, int* b)
{
	int temp=*a;
	*a = *b;
	*b = temp;

}

void find(int count)
{if(count<=0)
{	
	printf("find fail.\n");
	return;
}

	printf("%d\n",count);
	
	find(count-1);
}


void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합.

	//initialize();
#pragma endregion

#pragma region 반환형
	// 함수가 실행을 끝내고 돌려주는 결과의 자료형.
	// 함수의 경우 자료형과 반환하는 값의 형태가 일치하지 않으면 원하는 값을 얻을 수 없음.

	//printf("최대 체력: %d\n",max_health());

#pragma endregion

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수.

	//criticalize(20);

	// 매개 변수는 함수 내부에서만 연산이 이루어지며, 함수가 종료되면 메모리에서 해제됨.

	// 하나의 함수에 서로 다른 자료형의 매개 변수를 함께 정의할 수 있으며,
	// 여러 개의 매개 변수를 생성할 수 있음.

	//print_status('A', 160, 36.5);
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값.

	// 인수의 경우 함수에 있는 매개 변수에 따라 전달할 수 있는 인수의 수가 결정되며,
	// 값을 전달하는 인수와 값을 전달받는 매개 변수의 자료형이 서로 일치해야함.



	//int x1 = 10;
	//int y1 = 20;

	//swap(&x1, &y1);

	//

	//printf("실제값\n");
	//printf("x1=%d,y1=%d\n", x1, y1);

	

#pragma endregion

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수.

	// 재귀 함수는 함수를 계속 호출하기 때문에 
	// 스택 영역에 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생함.


	find(3);


#pragma endregion


}
