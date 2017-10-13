#include <stdio.h> 
#include<math.h>
typedef long long LL;
void testSize()
{
	printf("short %d\n",sizeof(short));
	printf("int   %d\n", sizeof(int));
	
	printf("float    %d\n", sizeof(float));
	printf("double   %d\n", sizeof(double));
	
	printf("longlong   %d\n", sizeof(long long));
}
int main()
{
	/*测试不同环境下基本类型数据的大小*/
	//testSize();
	/*求base的exp次方 double pow(doublebase,doubleexp);*/
	//printf("%f",pow(10,9));
	/*输入一个数，奇数则3n+1,偶数则减半，计算次数。考虑溢出*/ 
	int n1,count = 0;
	scanf("%d",&n1);
	
	long long n = n1;
	while(n > 1)
	{
		if(n%2) n=3*n+1;
		else n/=2;
		
		printf("%d\t",n);
		count++;
	}
	printf("%d\n",count);
	return  0;
}
/*
	
	
	*/
