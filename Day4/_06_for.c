#include <stdio.h>

void main6() {
	// for�� ����ؼ� 1~10���� ���
	// 1~10������ ��
	int �հ� = 0;

	for (int i = 1; i < 11; i++)
	{
		�հ� += i;
		printf("%d \n",i);

	}
	printf("%d \n", �հ�);

	// ���� �Է� �ް� �հ踦 ���ϼ���
	int b = 0;
	int sum = 0;
	printf("����� �� ���ұ��? \n");
	scanf("%d", &b);
	for (int a = 0;  a < b; a++)
	{
		sum += (a+1);
		printf("%d \n", a);


	}
	printf("%d", sum);
	
}