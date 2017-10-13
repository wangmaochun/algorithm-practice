/*
* 123 -> 321
* 120 -> 012
* 100 -> 001
*/
#include <stdio.h> 
#include <math.h>
int main()
{
	int num;
	int res;
	scanf("%d",&num);
	//printf("%d%d%d",num%10,num/10%10,num/100);
	res = (num%10)*100 + (num/10%10)*10 + (num/100);
	printf("%03d",res);
	return  0;
}
