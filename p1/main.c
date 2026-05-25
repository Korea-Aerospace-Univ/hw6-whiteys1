#include <stdio.h>

int main(){
	char arr[10] ={};
	char max_char = '\0'; 
	int max_count = 0;

	for(char *p = arr; p < arr + 10; p++) scanf("%c", p);

	for(char *p = arr; p < arr + 10; p++){
		int cur_count = 0;                  
		for(char *q = arr; q < arr + 10; q++){
			if (*p == *q) cur_count++;
		}
		if (cur_count > max_count){  
			max_char = *p;               
			max_count = cur_count;
		}
	}
	
	printf("%c %d", max_char,max_count );
	return 0;
}

