-----------------重定向版----------------
#define LOCAL
#include <stdio.h> 
#include<math.h>
/*
*description：输入一串数字，输出最小值，最大值，均值 
*			  重定向版本，输出通过观察屏幕输出，或者输出文件 
*/
#define INF 1000000000
int main()
{
	#ifdef LOCAL
	freopen("data_in.txt","r",stdin);
	//freopen("data_out.txt","w",stdout);
	#endif
	
	int x,n = 0,min,max,s=0;
	max = -INF; 
	min = INF; 
	while( scanf("%d",&x) == 1)
	{
		s += x;
		if(x < min) min = x;
		if(x > max) max = x;
		
		n++;
	}
	/*真正提交程序中不需要*/ 
	printf("%d %d %.3f\n",min,max,(double)s/n);
	return  0;
}

-----------------标准文件输入输出版----------------

#include <stdio.h> 
#include<math.h>
/*
*description：输入一串数字，输出最小值，最大值，均值 
*			  使用文件输入，输出，并通过脚本和标准答案比对 
*/
#define INF 1000000000
int main()
{
	FILE *fin,*fout;
	fin  = fopen("data_in.txt","r");
	fout = fopen("data_out.txt","w"); 
	
	int x,n = 0,min,max,s=0;
	max = -INF; 
	min = INF; 
	while( fscanf(fin,"%d",&x) == 1)
	{
		s += x;
		if(x < min) min = x;
		if(x > max) max = x;
		
		n++;
	}
	
	fprintf(fout, "%d %d %.3f\n",min,max,(double)s/n);
	fclose(fin);
	fclose(fout);
	
	return  0;
}
