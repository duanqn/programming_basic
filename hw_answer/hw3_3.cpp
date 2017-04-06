#define MAXN 100
#define MAXLEN 30
#include <stdio.h>
#include <string.h>
char strings[MAXN][MAXLEN + 1];
void strqsort(int l, int r){
	if(l >= r)
		return;
	int lp = l, rp = r, pivotp = l;
	while(l < r){
		while()
	}
}
int main(){
	int number_of_string;
	scanf("%d", &number_of_string);
	memset(strings, 0, sizeof(strings));
	for(int i = 0; i < number_of_string; ++i){
		scanf("%s", strings[i]);
	}
	// this is a selection sort and you need to rewrite it
	/*
	char temp[MAXLEN + 1];
	for(int i = 0; i < number_of_string - 1; ++i){
		for(int j = i+1; j < number_of_string; ++j){
			if(strcmp(strings[i], strings[j]) > 0){
				memset(temp, 0, sizeof(temp));
				strcpy(temp, strings[i]);
				strcpy(strings[i], strings[j]);
				strcpy(strings[j], temp);
			}
		}
	}
	*/
	for(int i = 0; i < number_of_string; ++i){
		printf("%s\n", strings[i]);
	}
}