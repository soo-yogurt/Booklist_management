#include"book.h"
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>




CheckList(int num, _stBook list[]) {

	system("cls");

	printf("===================================== ����� ���� ��� =============================================\n");
	printf("[������ȣ] |\t   [title]\r\t\t\t\t\t[price]  \t[author]\t[page]\t\t[Date]\n");
	printf("-----------+----------------------------------------------------------------------------------------\n");
	Showlist(num, list);
	printf("\n\n\n                             [esc]");

	while (1) { // esc�Է½� �޴��ΰ�

		char kib;

		kib = _getch();
		if (kib == 27)
			break;
	}
	system("cls");


}