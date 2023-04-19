#include<stdio.h>
double add(double a,double b)
{
	return a+b;
}
double sub(double a,double b)
{
	return a-b;
}
double mul(double a,double b)
{
	return a*b;
}
double div(double a,double b)
{
	return a/b;
}


int main()
{
	char z;
	double a,b,sum;
	printf("***欢迎使用计算器***\n"); 
	printf("a=");
	scanf("%lf",&a);
	getchar();
	for(;;)
	{
		printf("请输入运算符:");
		scanf("%c",&z);
		getchar();
		printf("b=");
		scanf("%lf",&b);
		getchar();
//		printf("a=%lf\nb=%lf\n",a,b);
		if(z=='+')
		{
			sum=add(a,b);
		}
		else if(z=='-')
		{
			sum=sub(a,b);
		}
		else if(z=='*')
		{
			sum=mul(a,b);
		}
		else if(z=='/')
		{
			sum=div(a,b);
		}
		printf("sum=%lf%c%lf=%lf\n",a,z,b,sum);
		a=sum;
		printf("a=%lf\n",a);
	}
	return 0;
}
