#include <stdio.h>
int main(){
	int n;
	scanf("%d" , &n);
	long long int cal = 1;
	if(n > 31)
		printf("Value of more than 31\n");
	else{
		for(int i = 0 ; i < n ; i++)
			cal = cal * 2;
		printf("%lld\n" , cal);
	}
	return 0;
}
