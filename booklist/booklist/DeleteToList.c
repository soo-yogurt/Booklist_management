#include"book.h"
#include<stdio.h>
#include<string.h>
#include<windows.h>




int deleteBook(int num, _stBook list[], _stBook booklist[]) {

	// ���� ����, ���� Ȯ��
	int K = 0;
	//���Է� ���� ���
	char answer[3];
	//���� �� å �̸�
	char deleteTitle[20];

	system("cls");

	printf("\n============================================== ���� ��� ===========================================\n");
	printf("-----------+----------------------------------------------------------------------------------------\n");
	printf("[������ȣ] |\t   [title]\r\t\t\t\t\t[price]  \t[author]\t[page]\t\t[Date]\n");
	printf("-----------+----------------------------------------------------------------------------------------\n");
	Showlist(num, list);

	printf("\n���� �� �������� �Է��ϼ��� : ");
	scanf_s(" %[^\n]s", deleteTitle, sizeof(deleteTitle));

		// �Է��� ������ ã�´�.


	for (int i = 0; i < MAX; i++) {
		if (strcmp(deleteTitle, list[i].title) == 0)
		{
			if (i == 19) {
#ifdef _delete_check	
				printf(" %s", list[i].title);
#endif _delete_check
				list[19] = booklist[19];
				K = 1;
			}
			else {
				for (; i < num; i++) {
					list[i] = list[i + 1];
					K = 1;
				}
			}
#ifdef _delete_check	
			printf("\ni�� %d\nnum�� %d\n", i, num);
#endif _delete_check
			num--;
		}

	}
#ifdef _delete_check
	printf("\nnum ��ġ å ������ \"%s\"�Դϴ�.\n", list[num - 1].title);
	
	for (int i = 0; i < num; i++) {
		printf("%2d.\t %s\n", i + 1, list[i].title);
	}
#endif _delete_check
	system("cls");
	
	if (K == 0) {
		printf("å�� ���� �� �� �����ϴ�.\n");
	}
	else {
		printf("���������� �����Ǿ����ϴ�.\n");
		K = 1;
	}
	
	return num;
}
