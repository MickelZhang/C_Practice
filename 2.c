//��ҵ���ŵĽ������������ɡ�����(I)���ڻ����10��Ԫʱ���������10%������� 
//��������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ��� 
//��������7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ���� 
//������40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������ 
//������100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������I����Ӧ���Ž��������� 


#include<stdio.h>

int main()
{
	int profit = 20;
	double bonus = 0.0; 
	
	if(profit <= 10)
	{
		bonus = profit*0.1;
	} else if(profit <= 20)
	{
		bonus = 10*0.1 + (profit-10)*0.075;
	}else if(profit <= 40)
	{
		bonus = 10*0.1 + 10*0.075 + (profit-20)*0.05;
	}else if(profit <= 60)
	{
		bonus = 10*0.1 + 10*0.075 + 20*0.05 +(profit-40)*0.03;
	}else if(profit <= 100)
	{
		bonus = 10*0.1 + 10*0.075 + 20*0.05 + 20*0.03 +(profit-60)*0.015; 
	}else
	{
		bonus = 10*0.1 + 10*0.075 + 20*0.05 + 20*0.03 + 40*0.015 +	(profit-100)*0.01;
	}
	
	
	printf("%lf��Ԫ\n",bonus);
	
	return 0;
 } 