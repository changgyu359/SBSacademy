#include <stdio.h>

void main() {

#pragma region �����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ִ��� ������ �Ѿ ������ �����ϴ� ����.

	// �����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�,
	// �Ǽ��� �� �����÷ο찡 �߻��ϸ� infinity��� ������ ��µ�.
	
	//char storage = 127+1; // 0111 1111 + 0000 0001 = 1111 1111 = -128

	//printf("storage = %d\n", storage);

#pragma endregion

#pragma region ����÷ο�
	// Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ������ �Ѿ ������ �����ϴ� ����.

	// ����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�,
	// �Ǽ��� �� ����÷ο찡 �߻��ϸ� 0�̶�� ������ ��µ˴ϴ�.

	//char data = -128 - 1; //1000 0000 + 1111 1111 = 0111 1111 = 127

	//printf("data = %d\n", data);

#pragma endregion


#pragma region ��ȣ ���� �ڷ���

	unsigned int count = 4294967295;
		
		// [1111 1111] [1111 1111] [1111 1111] [1111 1111]

	//printf("signed count ������ ��: %d\n", count);
	//printf("unsigned count ������ �� : %u\n", count);



#pragma endregion



}