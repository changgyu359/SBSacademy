#include<stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을 수행하도록 실행하는 명령문.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는 1이라는 값으로 나타내는 연산자.

	// 관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
	// 조건이 틀릴 때 0이라는 값으로 반환됨.

	//int posX = 10;
	//int posY = 20;
	//
	//	printf("posX < posY : %d\n", posX < posY);
	//	printf("posX > posY : %d\n", posX > posY);
	//	printf("posX >= posY : %d\n", posX >= posY);
	//	printf("posX <= posY : %d\n", posX <= posY);
	//	printf("posX != posY : %d\n", posX != posY);
	//	printf("posX == posY : %d\n", posX == posY);



#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문.

	// if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않음.

	//int health = 0;
	//if (health <= 0) 
	//{
	//	printf("사망했습니다.\n");
	//}


#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 조건이 맞다면 실행되는 명령문.

	// else if문은 여러 번 정의할 수 있으며, if문이 존재할 때 사용할 수 있음.

	//int level = 99;

	//if (level == 100)
	//{
	//	printf("전직이 가능합니다.\n");
	//}
	//else if (level <= 100)
	//{
	//	printf("전직에 필요한 레벨이 부족합니다.\n");
	//}

#pragma endregion

#pragma region else 문
	// if문과 else if문의 조건이 다 틀리면 실행되는 명령문.

	// if문에 연결된 모든 조건문의 조건이 맞을 때 가장 위에 있는 조건문만 실행됨.

	//int integer = 0;

	//if (integer>0)
	//{
	//	printf("해당숫자는 양수입니다.\n");
	//}
	//else if (integer<0)
	//{
	//	printf("해당숫자는 음수입니다.\n");
	//}
	//else
	//{
	//	printf("해당숫자는 0입니다.\n");
	//}
#pragma endregion

#pragma region switch문
	// 어떤 결과에 딸라 그 결과부터 실행되는 명령문.

	// switch문의 경우 조건에 해당하는 값에 따라 조건의 위치로 이동함.

	//char gradeA = 'B';
	//char gradeB = 'F';
	//char gradeC = 'Z';

	// switch문은 해당 조건이 완료되었을 때, 
	// break문이 없으면 나머지 모든 case문을 계속 실행시키다가 종료함.

	//switch (gradeA)
	//{
	//	case 'A':printf("당신의 점수는 100점~90점\n");
	//		break;
	//	case 'B':printf("당신의 점수는 89점~80점\n");
	//		break;
	//	case 'C':printf("당신의 점수는 79점~70점\n");
	//		break;
	//	case 'D':printf("당신의 점수는 69점~60점\n");
	//		break;
	//	case 'F':printf("당신의 점수는 59점~0점\n");
	//		break;
	//	default:printf("당신은 우리 학생이 아닙니다.");
	//}


	//switch (gradeB)
	//{
	//case 'A':printf("당신의 점수는 100점~90점\n");
	//	break;
	//case 'B':printf("당신의 점수는 89점~80점\n");
	//	break;
	//case 'C':printf("당신의 점수는 79점~70점\n");
	//	break;
	//case 'D':printf("당신의 점수는 69점~60점\n");
	//	break;
	//case 'F':printf("당신의 점수는 59점~0점\n");
	//	break;
	//default:printf("당신은 우리 학생이 아닙니다.\n");
	//}


	//switch (gradeC)
	//{
	//case 'A':printf("당신의 점수는 100점~90점\n");
	//	break;
	//case 'B':printf("당신의 점수는 89점~80점\n");
	//	break;
	//case 'C':printf("당신의 점수는 79점~70점\n");
	//	break;
	//case 'D':printf("당신의 점수는 69점~60점\n");
	//	break;
	//case 'F':printf("당신의 점수는 59점~0점\n");
	//	break;
	//default:printf("당신은 우리 학생이 아닙니다.\n");
	//}


#pragma endregion

#pragma region 논리 연산자

#pragma region AND 연산자
// 두 개의 조건이 다 성립될 때 실행되는 연산자.

//int score = 3;
//	char rank = 'A';
//
//	if (score ==3 && rank=='A') 
//	{
//		printf("달성");
//	}
//
//	else
//	{
//		printf("미달성");
//	}
#pragma endregion

#pragma region OR 연산자
	// 두 개의 조건 중에서 하나라도 조건이 성립될 때 실행되는 연산자.

	//int money = 0;
	//int ticket = 1;

	//if (money > '100' || ticket > 0)
	//{
	//	printf("입장하였습니다.\n");
	//}

	//else
	//{
	//	printf("돈이 부족합니다.\n");
	//}
#pragma endregion

#pragma region NOT 연산자
// 하나의 조건을 반전시키는 연산자

//int power = 0;
//
//if (!power)
//{
//	printf("off\n");
//}
//else
//{
//	printf("on\n");
//}

#pragma endregion



#pragma endregion

#pragma region 사분면

//int x = 1;
//int y = 1;
//
//if(x==0||y==0)
//{
//	if (x == 0 && y == 0)
//	{
//		printf("현재 위치는 원점\n");
//	}
//	else if (y != 0)
//	{
//		printf("현재 위치는 y절편\n");
//	}
//	else
//	{
//		printf("현재 위치는 x절편\n");
//	}
//}
//else if (x > 0)
//{
//	if (y > 0)
//	{
//		printf("현재 위치는 1사분면\n");
//	}
//	else
//	{
//		printf("현재 위치는 4사분면\n");
//	}
//}
//else
//{
//	if (y < 0)
//	{
//		printf("현재 위치는 3사분면\n");
//	}
//	else
//	{
//		printf("현재 위치는 2사분면\n");
//	}
//}

#pragma region 예시구문

//int x = -2;
//int y = 1;
//
//if (x > 0 && y > 0)
//{
//	printf("1사분면\n");
//}
//else if (x < 0 && y > 0)
//{
//	printf("2사분면\n");
//}
//else if (x < 0 && y < 0)
//{
//	printf("3사분면\n");
//}
//else if (x > 0 && y < 0)
//{
//	printf("4사분면\n");
//}
//else if (x != 0 && y == 0)
//{
//	printf("x절편\n");
//}
//else if (x == 0 && y != 0)
//{
//	printf("y절편\n");
//}
//else
//{
//	printf("원점\n");
//}
#pragma endregion









#pragma endregion


#pragma endregion

}
