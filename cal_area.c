/*
* input->calculate->output
* the program is auto execute and never have some prompt statement and chart
*/
#include <stdio.h> 
#include <math.h>
int main()
{
	const double pi = acos(-1);
	double r,h,s1,s2,s;
	scanf("%lf  %lf",&r,&h);
	s1 = pi * r * r;
	s2 = 2 * pi * r *h;
	s = s1 * 2 + s2;
	printf("Area :%0.3f\n",s);
	
	return  0;
}
