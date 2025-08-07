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

struct Data2
{
	char grade;
	double exp;
	int health;
	
};

struct Node
{
	int data;
	struct Node* next;

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

	

	//struct Distance player = { 1,1 };
	//struct Distance enemy = { 5,2 };
	//
	//double distance_x = player.x - enemy.x;
	//double distance_y = player.y - enemy.y;

	//if (sqrt(pow(distance_x, 2) + pow(distance_y, 2)) >= 5)
	//{
	//	printf("적의 상태:idle");
	//}
	//else
	//{
	//	printf("적의 상태:attack");
	//}



#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록,
	// 컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩해주는 최적화 작업.

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가 가장 큰 자료형의 배수가 되도록 정렬함.

	//printf("Data 의 크기:%zd\n",sizeof(struct Data));
	//printf("Data2의 크기:%zd\n", sizeof(struct Data2));

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가 다르게 설정될 수 있음.
#pragma endregion

#pragma region 자기 참조 구조체
		
	struct Node node2= { 20,NULL };
	
	struct Node node3= { 30,NULL };
	
	struct Node node1 = {10,&node2};

	node2.next=&node3;


	struct Node* currentNode = &node1;

	while (currentNode != NULL)
	{
		printf("%d ", currentNode->data);

		currentNode = currentNode->next;
	}
	

	
#pragma endregion

	return 0;
}
