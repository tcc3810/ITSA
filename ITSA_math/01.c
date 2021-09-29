#include <stdio.h>
int main(){
	int a , b , c;
	scanf("%d %d %d" , &a , &b , &c);
	printf("Trapezoid area:%.1f\n" , (float)(a + b) * c / 2);
	return 0;
}
