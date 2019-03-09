#include <stdio.h>

int main()
{
	int a,b,c,d;
	float e;
	printf("请输入4个整数\n");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	e = (float)(a+b+c+d)/4;
	printf("Sum = %d;Average = %.1f\n", a+b+c+d, e);
	return 0;
}