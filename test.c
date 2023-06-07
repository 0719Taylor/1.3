#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


//输入三个数，从大到小排序
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	//算法实现
//	//a中方放最大值
//	//b次之
//	//c中放最小值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}




////打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}



////给定两个数,求这两个数的最大公约数
////算法--辗转相除法
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d",&m,&n);
//	while (r=m % n)           r=24%18=6   m=18 n=6    r=18%6=0   则最大公约数为6
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("最大公约数:%d\n",n);
//	return 0;
//}




//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}*/
//		if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
//		{
//			printf("%d是闰年\n",year);
//			count++;
//		}
//	}
//	printf("count=%d",count);
//	return 0;
//}




//打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2--i-1个数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}


//升级1 如果i可以写成i=a*b的形式,则a和b中至少有一个数字<=开平方i	
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt -- 开平方的数学库函数
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}

//升级2 
//int main()
//{
//	int i = 0;
//	int count = 0;
////	sqrt -- 开平方的数学库函数
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount=%d\n",count);
//	return 0;
//}




//编写程序数一下1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n",count);  
//	return 0;
//}



//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}


//求10个整数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	return 0;
//}
//



//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n"); 
//	}
//	return 0;
//}





//goto 语句
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - 执行系统命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意,你的电脑在1分钟内关机,如果输入：我是猪,就取消关机\n请输入：");
//	scanf("%s",input);
//	if (strcmp(input, "我是猪") == 0) //比较两个字符串 - strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//不用goto实现关机程序
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
  		printf("请注意,你的电脑在1分钟内关机,如果输入：我是猪,就取消关机\n请输入：");
		scanf("%s",input);
		if (strcmp(input, "我是猪") == 0) //比较两个字符串 - strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}