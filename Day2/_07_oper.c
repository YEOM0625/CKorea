#include <stdio.h>

void main() {
	int num1 = 0;
	char name[50];
	// �н��� ��Ģ����
	// �̸��� �Է��ϼ��� (���)

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name);

	// �̸� (�Է�)
	printf("�н��� �̸��� %s �Դϴ�. \n", name);


	printf("1 + 1 = ");
	scanf("%d", &num1);
	(2 == num1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");
	printf("1+1 = %d \n", num1);

	// 2-1

	printf("2-1 = ");
	scanf("%d", &num1);
	(1 == num1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");
	printf("2-1 = %d \n", num1);

	// 3*3

	printf("3*3 = ");
	scanf("%d", &num1);
	(9 == num1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");
	printf("3*3 = %d \n", num1);

	// 10/2

	printf("10/2 = ");
	scanf("%d", &num1);
	(5 == num1) ? printf("�����Դϴ�.\n") : printf("�����Դϴ�.\n");
	printf("10/2 = %d \n", num1);



}