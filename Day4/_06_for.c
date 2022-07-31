#include <stdio.h>

void main6() {
	// for를 사용해서 1~10까지 출력
	// 1~10까지의 합
	int 합계 = 0;

	for (int i = 1; i < 11; i++)
	{
		합계 += i;
		printf("%d \n",i);

	}
	printf("%d \n", 합계);

	// 값을 입력 받고 합계를 구하세요
	int b = 0;
	int sum = 0;
	printf("몇까지 다 더할까요? \n");
	scanf("%d", &b);
	for (int a = 0;  a < b; a++)
	{
		sum += (a+1);
		printf("%d \n", a);


	}
	printf("%d", sum);
	
}