#include <stdio.h>

int main(){
	char arr[10] ={};

	for(int i = 0; i < 10; i++) scanf("%c", &arr[i]);

	char max_char = arr[0];
	int max_count = 0;

	for(char *p = arr; p < arr + 10; p++){
		char cur_count = 0;
		for(char *q = arr; q < arr + 10; q++){
			if (*p == *q) cur_count++;
			if (cur_count > max_count){
				max_char = *p;
				max_count = cur_count;
			}
		}
	}
	
	printf("%c %d", max_char,max_count );
	return 0;
}
