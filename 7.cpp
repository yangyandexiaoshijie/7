//��֧�����ѭ�����
//��֧��䣨ѡ����䣩
//if
//switch
//ѭ�����
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
////		printf("����\n");
////	else
////		printf("����\n");
////	return 0;
////}
//int main()
//{
//	switch(2)
//	{
//		case 1:
//		printf("�龰һ\n");
//		break;
//		case 2:
//		printf("�龰��\n");
//		break;
//		case 3:
//		printf("�龰��\n");
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
//	printf("����������:>");//��ʾ����
//	scanf("%s",password);//����һ���ַ���
//
//	while ((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N��:>");
//	ret=getchar();
//	if(ret=='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else if(ret=='N')
//	{
//		printf("ȷ�Ϸ���\n");
//	}
//	else 
//	{
//		printf("������Ч\n");
//	}
//	return 0;
//}
//int main()
//{
//	char ch=0;
//	while ((ch=getchar())!=EOF)
//	{
//		if(ch<'0'||ch>'9')//ֻ��ӡ0-9����
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
//	for (int i = 1; i < 11; i++)//���while����ϴ�����,����for���ŵ�
//	//for(expr1(��ʼ��)��expr2(�ж�)��expr3(����)).���顰ǰ�պ󿪡�����
//	{
//		if(i==5)//������ѭ���ڸı������������if(5=i)
//			//break;//��������ֹѭ������while����һ��
//			continue;//û�г�����ѭ�� 
//		printf("%d  ",i);
//	}
//	return 0;
//}
//int main()
//{
//	for(;;)//��ʼ�����жϺ͵���ʡ�ԣ�������Ϊ��
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
//	for(i=0,k=0;k=0;i++,k++)//��ֵk=0Ϊ�٣�ѭ������ȥ��ѭ��0��
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