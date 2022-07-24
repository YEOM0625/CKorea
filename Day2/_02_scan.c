#include <stdio.h>

void main2() {
	int 숫자;
	//char 문자;
	char 문자열[100];
	float 실수;

	// 입력
	int num = 0;
	//char a = 'b';
	char c[6] = "Hello";
	float f = 3.14f;

	printf("숫자를 입력하세요 :");
	scanf("%d", &num);
	//scanf("%c", &a);
	printf("문자열을 입력하세요 :");
	scanf("%s", &c);
	printf("실수를 입력하세요 : ");
	scanf("%f", &f);

	// 출력

	printf("당신이 입력한 숫자는 %d 입니다. \n", num);
	printf("당신이 입력한 문자열은 %s 입니다. \n", c);
	printf("당신이 입력한 실수는 %f 입니다. \n", f);


}