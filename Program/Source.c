#include<stdio.h>

void main() 
{
#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ���� ������ �����ϵ��� �����ϴ� ��ɹ�.

#pragma region ���� ������
	// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1�̶�� ������ ��Ÿ���� ������.

	// ���� �����ڴ� ������ ���� �� 1�̶�� ������ ��ȯ�Ǹ�,
	// ������ Ʋ�� �� 0�̶�� ������ ��ȯ��.

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

#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ��ɹ�.

	// if���� ������ 1�� �� ����Ǹ�, 0�� �� ������� ����.

	//int health = 0;
	//if (health <= 0) 
	//{
	//	printf("����߽��ϴ�.\n");
	//}


#pragma endregion

#pragma region else if��
	// if���� ������ Ʋ�� �� else if���� ������ �´ٸ� ����Ǵ� ��ɹ�.

    // else if���� ���� �� ������ �� ������, if���� ������ �� ����� �� ����.

	//int level = 99;

	//if (level == 100)
	//{
	//	printf("������ �����մϴ�.\n");
	//}
	//else if (level <= 100)
	//{
	//	printf("������ �ʿ��� ������ �����մϴ�.\n");
	//}

#pragma endregion

#pragma region else ��
	// if���� else if���� ������ �� Ʋ���� ����Ǵ� ��ɹ�.

	// if���� ����� ��� ���ǹ��� ������ ���� �� ���� ���� �ִ� ���ǹ��� �����.

	//int integer = 0;

	//if (integer>0)
	//{
	//	printf("�ش���ڴ� ����Դϴ�.\n");
	//}
	//else if (integer<0)
	//{
	//	printf("�ش���ڴ� �����Դϴ�.\n");
	//}
	//else
	//{
	//	printf("�ش���ڴ� 0�Դϴ�.\n");
	//}
#pragma endregion

#pragma region switch��
	// � ����� ���� �� ������� ����Ǵ� ��ɹ�.

	// switch���� ��� ���ǿ� �ش��ϴ� ���� ���� ������ ��ġ�� �̵���.

	char gradeA = 'B';
	char gradeB = 'F';
	char gradeC = 'Z';

	// switch���� �ش� ������ �Ϸ�Ǿ��� ��, 
	// break���� ������ ������ ��� case���� ��� �����Ű�ٰ� ������.

	switch (gradeA)
	{
		case 'A':printf("����� ������ 100��~90��\n");
			break;
		case 'B':printf("����� ������ 89��~80��\n");
			break;
		case 'C':printf("����� ������ 79��~70��\n");
			break;
		case 'D':printf("����� ������ 69��~60��\n");
			break;
		case 'F':printf("����� ������ 59��~0��\n");
			break;
		default:printf("����� �츮 �л��� �ƴմϴ�.");
	}


	switch (gradeB)
	{
	case 'A':printf("����� ������ 100��~90��\n");
		break;
	case 'B':printf("����� ������ 89��~80��\n");
		break;
	case 'C':printf("����� ������ 79��~70��\n");
		break;
	case 'D':printf("����� ������ 69��~60��\n");
		break;
	case 'F':printf("����� ������ 59��~0��\n");
		break;
	default:printf("����� �츮 �л��� �ƴմϴ�.\n");
	}


	switch (gradeC)
	{
	case 'A':printf("����� ������ 100��~90��\n");
		break;
	case 'B':printf("����� ������ 89��~80��\n");
		break;
	case 'C':printf("����� ������ 79��~70��\n");
		break;
	case 'D':printf("����� ������ 69��~60��\n");
		break;
	case 'F':printf("����� ������ 59��~0��\n");
		break;
	default:printf("����� �츮 �л��� �ƴմϴ�.\n");
	}


#pragma endregion



#pragma endregion

}