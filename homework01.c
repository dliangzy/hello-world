#include<stdio.h>
#include<math.h>
#define N 1000000
#define M 8
int main()
{
	int  k,i=1;
	double x[8]={0.0,0.1,0.5,1.0,0.0,20.0,100.0,200.0}, func_x;
	x[4]=sqrt(3);
	//while(i==1)
	//{
		//func_x=0;
		//printf("Please input x:");

		for(i=0;i<M;i++)
		{
			func_x=0;
			for(k=1;k<=N;k++)
				func_x=func_x+1/((x[i]+k)*k);
			printf("%6.2lf , %16.12e\n",x[i],func_x);
		}
		//printf("1:next	0:exit\n");
		//scanf("%d",&i);
	//}
	return 0;
}
