/*
��ǻ�����α׷��� �򰡰���(���� 25��)
�а� : ��ǻ�Ͱ��а�
�й� : 202101797
�̸� : �ռ���

���� ���� : �ڷγ� Ȯ�� �������
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int jindan1();


struct st {
	char str1[10][10];
	int str2[10][10];
};

int main()
{
	struct st st1;
	struct st* pst1;
	pst1 = &st1;
	
	(*pst1).str1[0][0] = jindan1();
	char diary[100] = " ";
	printf("ȯ���� ������ ������ ���� �Է����ּ���. \n�̸� �� �� ����: ");
	scanf("%s %d %d %s", &(*pst1).str1[1], &(*pst1).str2[0][0], &(*pst1).str2[0][1], &(*pst1).str1[2]);
	printf("������ ����� ������ �Ұ��� ������ �ּ���. (���͸� ����ϸ� ��� �ߴ�)\n->");
	scanf(" %[^\n]", diary);
	
	FILE* f;
	f = fopen("covid19 writting.txt", "a");

	if (f == NULL)
	{
		printf("������ ���������� ������ �ʾҽ��ϴ�");
		exit(0);
	}


	else
	{
		printf("������ ���������� ���Ƚ��ϴ�.\n");
	}

	fprintf(f, "�ۼ����̸�: %s �ۼ�����: %d�� %d�� %s\n", (*pst1).str1[1], (*pst1).str2[0][0], (*pst1).str2[0][1], (*pst1).str1[2]);
	fprintf(f, "������ �Ұ�: %s\n", diary);
	

	fclose(f);
	printf("%d�� %d���� ���� �ۼ��� �Ϸ� �Ǿ����ϴ�.", (*pst1).str2[0][0], (*pst1).str2[0][1]);
	return 0;
}
int jindan1()
{
	char j;
	printf("�ڷγ��� Ȯ���Ǿ����ϱ�? \n(Ȯ���ڸ� o �ƴϸ� x�� �Է��Ͻÿ�.) : ");
	while (1)
	{
		scanf("%c", &j);
		if (j == 'o')
		{
			printf("Ȯ���ڱ�� ���� �ۼ��� �����մϴ�.");
			break;
		}
		else if (j == 'x')
		{
			printf("Ȯ���ڰ� �ƴϱ⿡ �ۼ��� ����մϴ�.");
			exit(0);
		}
		else
		{
			printf("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���: ");
			continue;
		}
	}
	return j;


}

