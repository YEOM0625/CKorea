#include <stdio.h>

//Plus
int Plus(int n1, int n2) {
	int plus_result = n1 + n2;
	return plus_result;

}
//Minus
int Minus(int n1, int n2) {
	int minus_result = n1 - n2;
	return minus_result;

}

//Mul
int Mul(int n1, int n2) {
	int mul_result = n1 * n2;
	return mul_result;
}

//Div
double Div(int n1, int n2) {
	double div_result = (double)n1 / n2;		// 정수끼리 나누면 정수 결과가 나오기 때문에 하나를 실수로 바꿔줌
	return div_result;
}

 
int main2() {

	int plus_result = 0;
	int minus_result = 0;
	int mul_result = 0;
	double div_result = 0;

	// 함수 사용
	plus_result = Plus(3, 4);
	minus_result = Minus(3,4);
	mul_result = Mul(3,4);
	div_result = Div(3,4);



	//

	printf("%d \n", plus_result);
	printf("%d \n", minus_result);
	printf("%d \n", mul_result);
	printf("%lf \n", div_result);
	return 0;

}