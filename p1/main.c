#include <stdio.h>

int main(){
	char arr[10] ={};

	for(char *p = arr; p < arr + 10; p++) scanf("%c", p);

	char max_char = arr[0];  // 이렇게 할 필요가 없는 문제입니다. 얘는 '\0'으로 초기화하면 됩니다. 따라서 변수 선언은 위쪽으로 몰라서 선언해 주세요.
	int max_count = 0;

	for(char *p = arr; p < arr + 10; p++){
		char cur_count = 0;                   //--> int형이여야 합니다!
		for(char *q = arr; q < arr + 10; q++){
			if (*p == *q) cur_count++;
			if (cur_count > max_count){      // 이 if문은 내부 for문 다 돌린 후에 한 번만 체크하면 됩니다. 지금은 매번 체크하고 있지요.
				max_char = *p;               
				max_count = cur_count;
			}
		}
	}
	
	printf("%c %d", max_char,max_count );
	return 0;
}

