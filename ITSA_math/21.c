#include <stdio.h>
int main(){
	int n;
	scanf("%d" , &n);
	long long int sum = 1;
	for(int i = 1 ; i <= n ; i++)
		sum = sum * i;
	printf("%lld\n" , sum);
}
