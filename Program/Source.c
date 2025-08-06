#include<stdio.h>
#include<math.h>

struct Data
{
	char grade;
	int health;
	double exp;
};

struct Distance
{
	double x;
	double y;
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음 하나의 객체를 생성하는 것.

	// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로,
	// 구조체 내부에 있는 데이터를 초기화할 수 없음.

	//struct Data data = { 'B',50,75.625 };

	//printf("현재 등급:%c\n", data.grade);
	//printf("현재 체력:%d\n", data.health);
	//printf("현재 경험치:%lf\n\n", data.exp);


	//// 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화됨.
	//// 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 대응됨.

	//data.grade = 'S';
	//data.health = 10;
	//data.exp = 10.5;

	//printf("현재 등급:%c\n", data.grade);
	//printf("현재 체력:%d\n", data.health);
	//printf("현재 경험치:%lf\n", data.exp);

#pragma endregion

#pragma region 두 점 사이의 거리

	//sqrt(49); //루트
	//pow(5, 2); //제곱근, x의y승 이라는 표현

	int player_x = 1;
	int player_y = 1;
	int enemy_x = 5;
	int enemy_y = 2;

	struct Distance distance;

	distance.x = player_x - enemy_x;
	distance.y = player_y - enemy_y;

	if (sqrt(pow(distance.x, 2) + pow(distance.y, 2)) >= 5)
	{
		printf("적의 상태:idle");
	}
	else
	{
		printf("적의 상태:attack");
	}



#pragma endregion

	return 0;
}
