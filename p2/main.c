#include <stdio.h>

int main(){
	int N;

	scanf("%d", &N);  // 변수 선언들 모두 끝난 후에 scanf 받으면 좋겠습니다.
	int arr_1[20] = {};
	int arr_2[20] = {};
	int *p, *q;   //nullptr 초기화하길 바랍니다.

	for(p = arr_1; p < arr_1 + N; p++){
		scanf("%d", p);
	}

	for(q = arr_2; q < arr_2 + N; q++){
		scanf("%d", q);
	}

	p = arr_1;
	q = arr_2 + N - 1;
	
	for(int i = 0; i < N; i++){                            //포인터로 for문 돌려야 합니다. 이 부분 수정해서 다시 메일 보내주세요! 차라리 결과값을 저장하는 배열 하나 
		printf(" %d", *(p + i) + *(q - i));                // 더 추가해서 코드 작성하는 것이 좋을 것 같습니다.  
	}


	return 0;
}
