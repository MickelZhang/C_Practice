//���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ���ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ��
//��һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
#include<stdio.h>
//int main()
//{
//	int num = 1;
//	
//	int i = 0;
//
//	for (i = 9; i > 0; i--)
//	{
//		num = (num + 1) * 2;
//	}
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;/*��һ����������ǵ�2����������1���2��*/
//		x2 = x1;
//		day--;
//	}
//	printf("the total is %d\n", x1);
//}
int Monkey(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return 2*(Monkey(n-1)+1);
	}
}


int main()
{
	int n = 10;
	
	printf("%d\n",Monkey(n));
	return 0;
 } 