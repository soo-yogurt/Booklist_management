#include<stdio.h>
#include"book.h"



Menu(int listnumber){

	printf("-+= ====================== = +\n");
	printf("-|          �޴�             |\n");
	printf("-+= ====================== = +\n");
	printf("-|      1. ���� �߰�         |\n");
	printf("-|         [%02d/20]           |\n", listnumber);
	printf("-|      2. ���� ����         |\n");
	printf("-|      3. ���� ����         |\n");
	printf("-|      4. ���� �˻�         |\n");
	printf("-|      5. ���� Ȯ��         |\n");
	printf("-+= ======================= =+\n");

}

MenuToMax(int listnumber){

	printf("-+= ====================== = +\n");
	printf("-|          �޴�             |\n");
	printf("-+= ====================== = +\n");
	printf("-|      1. ���� ����         |\n");
	printf("-|      2. ���� ����         |\n");
	printf("-|      3. ���� �˻�         |\n");
	printf("-|      4. ���� Ȯ��         |\n");
	printf("-|                           |\n");
	printf("-|      ����� ���� ��       |\n");
	printf("-|         [%02d/20]           |\n", listnumber);
	printf("-+= ======================= =+\n");

}

int initialization(_stBook list[], _stBook booklist[]) {

	int booknumber = 0;
	for (int i = 0; i < MAX; i++) list[i] = booklist[i];

	for (int i = 0; i < MAX; i++) // ��ȣ �ʱ�ȭ
		if (list[i].price == 0) {
			booknumber = i;
			break;
		}
		else booknumber++;

#ifdef _booknumber
	printf("bookunmber : %d\n", booknumber);
#endif _booknumber
	return booknumber;
}