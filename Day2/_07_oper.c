#include <stdio.h>

void main() {
	int num1 = 0;
	char name[50];
	// 학습지 사칙연산
	// 이름을 입력하세요 (출력)

	printf("이름을 입력하세요 : ");
	scanf("%s", &name);

	// 이름 (입력)
	printf("학습지 이름은 %s 입니다. \n", name);


	printf("1 + 1 = ");
	scanf("%d", &num1);
	(2 == num1) ? printf("정답입니다.\n") : printf("오답입니다.\n");
	printf("1+1 = %d \n", num1);

	// 2-1

	printf("2-1 = ");
	scanf("%d", &num1);
	(1 == num1) ? printf("정답입니다.\n") : printf("오답입니다.\n");
	printf("2-1 = %d \n", num1);

	// 3*3

	printf("3*3 = ");
	scanf("%d", &num1);
	(9 == num1) ? printf("정답입니다.\n") : printf("오답입니다.\n");
	printf("3*3 = %d \n", num1);

	// 10/2

	printf("10/2 = ");
	scanf("%d", &num1);
	(5 == num1) ? printf("정답입니다.\n") : printf("오답입니다.\n");
	printf("10/2 = %d \n", num1);



}