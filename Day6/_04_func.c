#include <stdio.h>

//int g_num = 1;8		// 전역변수 : {}안에서 만들어진 변수가 아님, {}를 벗어날 일이 없음
// 전역변수는 어디서든 사용 가능하나 해제가 안되어 메모리 낭비가 심함 --> 사용자제

int function1() {
	int num = 3333;		// 지역변수
	
}
int function2(int num) {
	///3333을 출력

	int num2 = 0;
	printf("%d \n", num);
}

int main() {
	int num = 0;

	function1();
	function2(num);

	return 0;
}