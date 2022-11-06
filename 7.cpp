//分支语句与循环语句
//分支语句（选择语句）
//if
//switch
//循环语句
//while
//for
//do while
//goto
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////int main()
////{
////	int i=1;
////	if(i>1)
////		printf("有人\n");
////	else
////		printf("无人\n");
////	return 0;
////}
//int main()
//{
//	switch(2)
//	{
//		case 1:
//		printf("情景一\n");
//		break;
//		case 2:
//		printf("情景二\n");
//		break;
//		case 3:
//		printf("情景三\n");
//		break;
//	}
//
//	return 0;
//}
//int main()
//{
//	int ret=0;
//	int ch=0;
//	char password[20]={0};
//
//	printf("请输入密码:>");//提示输入
//	scanf("%s",password);//接收一个字符串
//
//	while ((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）:>");
//	ret=getchar();
//	if(ret=='Y')
//	{
//		printf("确认成功\n");
//	}
//	else if(ret=='N')
//	{
//		printf("确认放弃\n");
//	}
//	else 
//	{
//		printf("输入无效\n");
//	}
//	return 0;
//}
//int main()
//{
//	char ch=0;
//	while ((ch=getchar())!=EOF)
//	{
//		if(ch<'0'||ch>'9')//只打印0-9的数
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i=0;
//	while (i<10)
//	{
//		i++;
//		printf("%d",i);
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i < 11; i++)//解决while间隔较大问题,这是for的优点
//	//for(expr1(初始化)，expr2(判断)，expr3(调整)).建议“前闭后开”区间
//	{
//		if(i==5)//不可在循环内改变调整变量，如if(5=i)
//			//break;//跳出、终止循环。与while里面一样
//			continue;//没有出现死循环 
//		printf("%d  ",i);
//	}
//	return 0;
//}
//int main()
//{
//	for(;;)//初始化、判断和调整省略，条件横为真
//		/*for (int i = 0; i < length; i++)
//		{
//
//		}*/
//	{
//		printf("hehe|\n");
//	}
//	return 0;
//}
//int main()
//{
//	int	i=0;
//	int j=0;
//	for(int i=0;i<10;i++)
//	{
//		for(int j=0;j<10;j++)
//	{
//		printf("hehe|\n");
//	}
//	}
//	return 0;
//}
	
//int main()
//{
//	int	x,y;
//	for(x=0,y=0;x<2 && y<5;x++,y++)
//	{
//		printf("hehe|\n");
//	}
//	return 0;
////}
//int main()
//{
//	int	i=0;
//	int k=0;
//	for(i=0,k=0;k=0;i++,k++)//赋值k=0为假，循环不进去，循环0次
//	{
//		k++;
//	}
//	return 0;
//}
//}
int main()
{
	int i=1;
	do
	{
		if(i==5)
			//break;
				continue;
		printf("%d ",i);
		i++;
	} 
	while (i<11);

	return 0;
}