//#include<stdio.h>
//#include<string.h >
//char c[100][50];
//char f[300][50];
//int N, sum = 0; // NΪ�������ֵĸ���, sumΪβ���׺���������ֵĸ���
//int flag; //�ж��Ƿ�Ψһ������λ
//void patterson(char c[], char d[]) //���β���׺
//{
//	int i, j, k;
//	for (i = 0;; i++)
//	{
//		if (c[i] == '\0' && d[i] == '\0')   //�ַ�һ������
//			break;
//		if (c[i] == '\0')   //d��c������d��β���׺����f��
//		{
//			for (j = i; d[j] != '\0'; j++)f[sum][j - i] = d[j];
//			f[sum][j - i] = '\0';
//			for (k = 0; k < sum; k++)
//			{
//				if (strcmp(f[sum], f[k]) == 0)   //�鿴��ǰ���ɵ�β���׺��f�������Ƿ����
//				{
//					 sum--; 
//					 //break;
//				}
//			}
//			sum++;
//			break;
//		}
//		if (d[i] == '\0')  //c��d������c��β���׺����f��
//		{                                              
//			for (j = i; c[j] != '\0'; j++)f[sum][j - i] = c[j];
//			f[sum][j - i] = '\0';
//			for (k = 0; k < sum; k++)
//			{
//				if (strcmp(f[sum], f[k]) == 0)   //�鿴��ǰ���ɵ�β���׺��f�������Ƿ����
//				{
//					sum--; 
//					//break;
//				}
//			}
//			sum++;
//			break;
//		}
//		if (c[i] != d[i])
//			break;
//	}
//}
//int main()
//{
//	int i, j;
//	printf("���������ֵĸ�����С��100����");   //������ĸ���
//	scanf_s("%d", &N, 10);
//	while (N > 100)
//	{
//		printf("�������ֵø�������������С��100����\n");
//		printf("���������ֵĸ�����С��100����");
//		scanf_s("%d", &N, 10);
//	}
//	flag = 0;
//	printf("��ֱ��������֣�ÿ�����ֳ���С��50���ַ���:\n");
//	for (i = 0; i < N; i++)
//	{
//		scanf_s("%s", &c[i], 51);
//	}
//	for (i = 0; i < N - 1; i++)    //�ж�����뱾���Ƿ��ظ�
//		for (j = i + 1; j < N; j++)
//		{
//			if (strcmp(c[i], c[j]) == 0)
//			{
//				flag = 1; break;
//			}
//		}
//	if (flag == 1)
//		printf("�ⲻ��Ψһ�����롣\n");
//	else
//	{
//		for (i = 0; i < N; i++)  //����ԭʼ�������ɵ�β���׺����s[1]����f��
//		{
//			for (j = i + 1; j < N; j++)
//				patterson(c[i], c[j]);
//		}
//		for (i = 0;; i++)
//		{
//			int s = 0;
//			for (j = 0; j < N; j++)
//			{
//				if (i == sum)
//				{
//					s = 1; break;
//				}
//				else patterson(f[i], c[j]);
//			}
//			if (s == 1)break;
//		}
//		for (i = 0; i < sum; i++)   //�ж�p������ַ����Ƿ���s�е��ظ����ظ�����Ψһ��
//		{
//			for (j = 0; j < N; j++)
//			{
//				if (strcmp(f[i], c[j]) == 0)
//				{
//					flag = 1;
//					break;
//				}
//			}
//		}
//		if (flag == 1)
//			printf("�ⲻ��Ψһ������ġ�\n");
//		else
//			printf("����Ψһ�����롣\n");
//	}
//	printf("β���׺����Ϊ��");
//	for (i = 0; i < sum; i++)
//		printf("\n%s", f[i]);
//}