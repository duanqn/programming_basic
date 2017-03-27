#include <stdio.h>
#include <math.h>
int main(){
	printf("Please input a positive integer:");
	int num;
	scanf("%d", &num);
	if(num <= 0){
		printf("%d is not a positive integer.\n", num);
	}
	else if(num == 1){
		printf("1 = 1\n");
	}
	else{
		int target = num;
		bool prime = true;
		int factor_count = 0;
		printf("%d = ", num);
		while(target > 1){
			prime = true;
			for(int i = 2; i <= sqrt(target); ++i){
				if(target % i == 0){
					prime = false;
					if(++factor_count > 1){
						printf("* ");
					}
					printf("%d ", i);
					target /= i;
					break;
				}
			}
			if(prime == true){
				if(++factor_count > 1){
					printf("* ");
				}
				printf("%d ", target);
				break;
			}
		}
		if(factor_count == 1)
			printf("\t(Prime)");
		printf("\n");
	}
	return 0;
}