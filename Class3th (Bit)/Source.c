#include <stdio.h>

void main()
{
#pragma region ��� ������
	/*1. ���� = ���� + ����

	int x1 = 3;
	int x2 = 5;
	int x3 = x1 + x2;

	printf("%d = %d + %d\n", x3,x1,x2);

	 2. ���� = ���� - ���ͷ� ���

	int x4 = 20;
	int x5 = x4 - 7;

	printf("%d = %d - 7\n", x5, x4);

	 3. ���� = ���� * �ɺ��� ���

	int x6 = 4;
	const int x7 = 10;
	int x8 = x6 * x7;

	printf("%d = %d * %d\n", x8, x6, x7);


	 4. ���� = ���ͷ� ��� / ���ͷ� ��� *������ ������ ����������

	int x9 = 20 / 4;

	printf("%d = 20 / 4\n", x9);


	 5. ���� = �ɺ��� ��� % ���ͷ� ���

	const int x10 = 23;
	int x11 = x10 % 12;

	printf("%d = %d %% 12", x11, x10);*/



	// �̰� �� �� �̻ڰ� �����Ϸ���
	// 1. ��� ������ ����� �������� ���� ����
	// 2. ���Ŀ� ����� ������ �ɺ��� ��� ����
	// 3. ��� ���� �ش��ϴ� ������ �ۼ�
	// 4. �� ��� �������� ����ϱ⸸ �ϸ� ��


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

	//// 1. ���� = ���� + ����
	//storage1 = x + y;

	//// 2. ���� = ���� - ���ͷ� ���
	//storage2 = z - 1;

	//// 3. ���� = ���� * �ɺ��� ���
	//storage3 = w * constant;

	//// 4. ���� = ���ͷ� ��� / ���ͷ� ���
	//storage4 = 20 / 5;

	//// 5. ���� = �ɺ��� ��� % ���ͷ� ���
	//storage5 = constant % 5;

	//printf("storage1�� �� : %d\n", storage1);
	//printf("storage2�� �� : %d\n", storage2);
	//printf("storage3�� �� : %d\n", storage3);
	//printf("storage4�� �� : %d\n", storage4);
	//printf("storage5�� �� : %d\n", storage5);


#pragma endregion



#pragma region ��Ʈ
	 //�����͸� ��Ÿ���� �ּ��� �����̸�,
	 //0�Ǵ� 1�� �������� �� ����� �����ϴ� �����̴�.

#pragma region (10)������ (2)������ ��ȯ�ϴ� ����
	// 10������ 1�� �� ������ ��� 2�� ������ �� ����
	// ���� ��ġ�� ������ ���� �Ʒ����� ���� ������� �����մϴ�.

#pragma endregion

#pragma region (2)������ (10)������ ��ȯ�ϴ� ����
	 //1byte�� 2������ ����� ���� 2�� �������� ��Ÿ����.

	 //������ ��Ʈ�� 1�� �ִٸ� 1�� 2�� ������ ��ġ�� ����� ����
	 //������ ��Ʈ�� ��� ���Ͽ� 10������ ��Ÿ����.

#pragma endregion

#pragma region ��Ʈ ������
	// ��Ʈ ������ �� ������ �����ϱ� ���� ����ϴ� ������.

#pragma region AND ������
	// �� ���� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ�ϴ� ������.

	//int storage1 = 10;
	//int storage2 = 6;

	//printf("storage1 & storage2 = %d\n",storage1 & storage2);
	//


#pragma endregion

#pragma region or ������
	// �� ���� �ǿ����� �߿� �ϳ��� 1�� �ִٸ� 1�� ��ȯ�ϴ� ������.

	//int storage3 = 8;  // 0000 1000
	//int storage4 = 12; // 0000 1100 
	//                   // 0000 1100 = 12
	//
	//printf("storage3 | storage4 = %d\n", storage3 | storage4);

#pragma endregion

#pragma region XOR ������
	// �� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ�,
	// ���� �ٸ��� 1�� ��ȯ�ϴ� ������.

	//int storage5 = 6;   //0000 0110
	//int storage6 = 15;  //0000 1111
	//                    //0000 1001

	//printf("storage5 ^ storage6 = %d\n", storage5 ^ storage6);
#pragma endregion

#pragma region NOT ������
	// �ϳ��� ��Ʈ�� ������Ű�� ������

	//int storage7 = 13; //0000 1101
	//                   //1111 0010 ?

	//printf("~sotrage7 = %d\n ", ~storage7);

	// ù ��° ��Ʈ�� ��ȣ�� ��Ÿ����,
	// ù ��° ��Ʈ�� 1�� �ִٸ� ���� �����̴�.





#pragma endregion


#pragma endregion

#pragma region ����Ʈ ������
// ��Ʈ�� Ư���� ��ġ�� ������ ����ŭ �̵���Ű�� ������.
// <<,>>�� �����

//int data = 5;
//int shift = data << 2;
//
//printf("shift�� �� : %d\n", shift);
//
// shift = data >> 1; //shift�� �̹� ���������� �ٽ� ������ �ʿ� ����,
//                    //������ �������Ͽ� ���ο� ���� ȹ��
//                    //shift�� �����������Ƿ� data���� ��ȭ ����               
//
//printf("shift�� �� : %d\n", shift);

#pragma endregion


#pragma endregion



}