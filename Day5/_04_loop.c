#include <stdio.h>

void main4() {
	// break와 continue를 활용
	for (int i = 0; i < 100; i++){
		
		// 1~50까지 짝수만 나오게
		if (i % 2 == 1){
			continue;
			
		}
	
		if (i == 50) {
				break;
		}
		printf("%d \n", i+2);
		
		
	}

	// 강사님 문제 풀이
	//if (i % 2 == 1 || i == 0) {
	//	continue;
	//}
	//if (i > 50) {
	//	break;
	//}
	

}