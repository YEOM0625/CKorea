#include <stdio.h>

void main2() {
	int ����;
	//char ����;
	char ���ڿ�[100];
	float �Ǽ�;

	// �Է�
	int num = 0;
	//char a = 'b';
	char c[6] = "Hello";
	float f = 3.14f;

	printf("���ڸ� �Է��ϼ��� :");
	scanf("%d", &num);
	//scanf("%c", &a);
	printf("���ڿ��� �Է��ϼ��� :");
	scanf("%s", &c);
	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%f", &f);

	// ���

	printf("����� �Է��� ���ڴ� %d �Դϴ�. \n", num);
	printf("����� �Է��� ���ڿ��� %s �Դϴ�. \n", c);
	printf("����� �Է��� �Ǽ��� %f �Դϴ�. \n", f);


}