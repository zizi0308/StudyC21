#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
	�α��� ���α׷�
	1. id�� password�� �����ϰ� �����̸��� password.txt�� �����Ѵ�.
	2. ����ü Login ������ id, password ����� ���� ������ ��Ű��
	3. Ű����� �ԷµǴ� ���̵�� �н����带 ���Ͽ� ��ġ�ϸ� "�α��εǾ����ϴ�."
	   �Ǵ� "id�� ã�� �� �����ϴ�." ��� �޼����� ����ϴ� ���α׷� �ۼ�
*/
typedef struct login
{
	char* id[20];
	char password[20];
}Login;

int main(void)
{
	Login member;

	FILE* fp;
	int res;
	char temp1[20];								// �Է��� ���̵� �޾ƿ��� ���� ����
	char temp2[20];								// �Է��� ��й�ȣ�� �޾ƿ��� ���� ����
	fp = fopen("password.txt", "r");			// ���������Ͱ� fopen�� ȣ���ϸ� stream������ ���������, �ű��ִ� �����͸� ���۸� ���� �а��� �� �ִ�.
	if (fp == NULL)								// ������ �������� ���� ��
	{
		printf("������ ������ �ʾҽ��ϴ�");

		return 1;								// ���� �������� �Լ��� �����ٴ� �ǹ�
	}

	printf("���̵� �Է��ϼ��� : ");
	scanf("%s", temp1);
	printf("��й�ȣ�� �Է��ϼ��� : ");
	scanf("%s", temp2);

	while (1)
	{
		res = fscanf(fp, "%s%s", &member.id, &member.password);	// res�� �������� �������� �������� �� �޾ƿ�������
		if (res == EOF)			// res�� �����͸� �� �о EOF�� ��ȯ�ϸ� ����
		{
			break;
		}
		//printf("%s%s", member.id, member.password);
		if (strcmp(member.id, temp1) == 0)						// ������̵�� �Է°��� �񱳰��� 0�̸� ���ڿ� ��ġ
		{
			printf("�α��ο� �����߽��ϴ�\n");
		}
		if (strcmp(member.password, temp2) == 0)
		{
			printf("�α��ο� �����߽��ϴ�\n");
		}
		else
		{
			printf("�α��ο� �����߽��ϴ�. ���̵�� ��й�ȣ�� Ȯ�����ּ���.\n");
		}

		fclose(fp);

		return 0;
	}
}