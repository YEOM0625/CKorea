#include <stdio.h>

//int g_num = 1;8		// �������� : {}�ȿ��� ������� ������ �ƴ�, {}�� ��� ���� ����
// ���������� ��𼭵� ��� �����ϳ� ������ �ȵǾ� �޸� ���� ���� --> �������

int function1() {
	int num = 3333;		// ��������
	
}
int function2(int num) {
	///3333�� ���

	int num2 = 0;
	printf("%d \n", num);
}

int main() {
	int num = 0;

	function1();
	function2(num);

	return 0;
}