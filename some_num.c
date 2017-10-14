#define LOCAL
#include <stdio.h> 
#include<math.h>
/*
*description：输入一串数字，输出最小值，最大值，均值 
*			  重定向版本，输出通过观察屏幕输出，或者输出文件 
*			  输入0时结尾，每个测试用例直接有一个换行 
* input: 8
		 2 8 3 5 1 7 3 6
		 4
		 -4 6 10 0
		 0
 output:
 	Case 1: 1 8 4.375
 	
 	Case 2: -4 10 3.000
*/
#define INF 1000000000
int main()
{
	#ifdef LOCAL
	freopen("data_in.txt","r",stdin);
	//freopen("data_out.txt","w",stdout);
	#endif
	
	int x,n = 0,min,max,s=0;
	int kase=0; 
	
	/*n=0时结束*/ 
	while( scanf("%d",&n) == 1 && n)
	{
		/*每一个测试用例，需初始化初值*/
		s=0; max = -INF;min = INF; 
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x);
			s += x;
			if(x < min) min = x;
			if(x > max) max = x;
		}
		
		/*除第一次外，测试用例之间添加换行*/ 
		if(kase) printf("\n");
		printf("Case %d: %d %d %.3f\n",++kase,min,max,(double)s/n);
	}
	
	
	return  0;
}
