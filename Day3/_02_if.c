#include <stdio.h>

void main2() {
	int age = 0;
	printf("���̸� �Է��ϼ��� >>");
	scanf("%d", &age);		// ���̰��� ��


	if (age < 10) {
		printf("����Դϴ�.\n");
	}
	else if (age < 20 ) {
		// else if : if�� Ʋ���� �� �� ������ �˻��� if 
		printf("10���Դϴ�.");
	}


	else if (age < 30)		// ���� �ִ� if�� else if�� ��� Ʋ���� ���� �˻�
	{
		// 20���Դϴ�.
		printf("20���Դϴ�.");

	}

	else if (age >= 30 ) {

		// 30���Դϴ�.
		printf("30���̻��Դϴ�.");
	}
}