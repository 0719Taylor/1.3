#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


//�������������Ӵ�С����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	//�㷨ʵ��
//	//a�з������ֵ
//	//b��֮
//	//c�з���Сֵ
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




////��ӡ1-100֮������3�ı���������
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



////����������,���������������Լ��
////�㷨--շת�����
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d",&m,&n);
//	while (r=m % n)           r=24%18=6   m=18 n=6    r=18%6=0   �����Լ��Ϊ6
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("���Լ��:%d\n",n);
//	return 0;
//}




//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d������\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d������\n", year);
//			count++;
//		}*/
//		if (((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
//		{
//			printf("%d������\n",year);
//			count++;
//		}
//	}
//	printf("count=%d",count);
//	return 0;
//}




//��ӡ100-200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2--i-1����
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


//����1 ���i����д��i=a*b����ʽ,��a��b��������һ������<=��ƽ��i	
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt -- ��ƽ������ѧ�⺯��
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

//����2 
//int main()
//{
//	int i = 0;
//	int count = 0;
////	sqrt -- ��ƽ������ѧ�⺯��
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




//��д������һ��1��100�����������г��ֶ��ٸ�����9
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



//����1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ����ӡ�����
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


//��10�������е����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//���ֵ
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



//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n"); 
//	}
//	return 0;
//}





//goto ���
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע��,��ĵ�����1�����ڹػ�,������룺������,��ȡ���ػ�\n�����룺");
//	scanf("%s",input);
//	if (strcmp(input, "������") == 0) //�Ƚ������ַ��� - strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//����gotoʵ�ֹػ�����
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
  		printf("��ע��,��ĵ�����1�����ڹػ�,������룺������,��ȡ���ػ�\n�����룺");
		scanf("%s",input);
		if (strcmp(input, "������") == 0) //�Ƚ������ַ��� - strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}