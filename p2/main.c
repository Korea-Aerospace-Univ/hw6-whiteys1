#include <stdio.h>

int main(){
	int N;
	int arr_1[20] = {};
	int arr_2[20] = {};
	int result[20] = {};
	int *p = nullptr, *q = nullptr, *r = nullptr;   //nullptr 초기화하길 바랍니다.

	scanf("%d", &N);

	for(p = arr_1; p < arr_1 + N; p++){
		scanf("%d", p);
	}

	for(q = arr_2; q < arr_2 + N; q++){
		scanf("%d", q);
	}

	p = arr_1;
	q = arr_2 + N - 1;

	for(r = result; r < result + N; r++, p++, q--){
		*r = *p + *q;
	}

	for(r = result; r < result +  N; r++){
		printf(" %d", *r);
	}
	
	return 0;
}
