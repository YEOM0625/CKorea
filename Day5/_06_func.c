#include <stdio.h>

// sum
void Sum(int num1, int num2) {

	int result = num1 + num2;
	printf("%d \n", result);
}

// Sub
void Sub(int n, int m) {
	int result = n - m;
	printf("%d \n", result);

}

// Mul
void Mul(int o, int p) {
	int result = o * p;
	printf("%d \n", result);
}

// Div
void Div(int i, int j) {
	int result = i / j;
	printf("%d \n", result);
}

// ���� 2���� �޾Ƽ� ���� �������� ����� ���ϱ�(���� : ���̳ʽ��� �÷����� �ٲ�)
void A(int i, int j) {
	int result = i + j ;

	if (i > 0 && j > 0)
	{
		printf("%d \n", result);
	}else
		printf("%d \n",  );
}

// ���� 2���� �޾Ƽ� ���� �������� ����� ����

void B(int i, int j) {
	int result = i - j;

}

// C����� �������� main() �Լ��̴�.
int main() {

	Sum(2, 2);

	Sub(2, 2);
	
	Mul(2, 2);
	
	Div(2, 2);


	printf("\n\n");

	A(-3, 2);

	return 0;
}