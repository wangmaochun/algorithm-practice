#include <stdio.h> 
#include <math.h>
int main()
{
	int n,m;
	int x,y;
	scanf("%d %d",&n,&m);
	x = 2*n-m/2;
	y = m/2-n ;
	//腿数为偶数，兔和鸡个数非负 
	if (m%2==0 && x >= 0 && y >= 0)
	{
		printf("%d %d",x,y);
	}else
	{
		printf("No answer");
	}
	

	return  0;
}
