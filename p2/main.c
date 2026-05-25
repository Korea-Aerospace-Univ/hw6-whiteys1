#include <stdio.h>

int main(){
	int N;

	scanf("%d", &N);
	int arr_1[20] = {};
	int arr_2[20] = {};
	int *p, *q;

	for(p = arr_1; p < arr_1 + N; p++){
		scanf("%d", p);
	}

	for(q = arr_2; q < arr_2 + N; q++){
		scanf("%d", q);
	}

	p = arr_1;
	q = arr_2 + N - 1;
	
	for(int i = 0; i < N; i++){
		printf(" %d", *(p + i) + *(q - i));
	}


	return 0;
}
