#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("���������룺");/*123456*/
//	gets(password);
//	/*scanf_s("%s", password,20);*/
//	/*while (getchar() != '\n')
//	{
//		;
//	}*/
//	printf("��ȷ�����루T/F):");
//	ch = getchar();
//	if (ch == 'T')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	return 0;
//}
#include<stdlib.h>
#include<windows.h>
void game()
{
	int num = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("�������\n");
		scanf_s("%d", &num);
		if (num < ret)
			printf("��С��\n");
		else if (num > ret)
			printf("�´���\n");
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
void menu()
{
	printf("******************************************\n");
	printf("**************    1.play    **************\n");
	printf("**************    2,exit    **************\n");
	printf("******************************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}