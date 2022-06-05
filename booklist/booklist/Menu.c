#include<stdio.h>
#include"book.h"



Menu(int listnumber){

	printf("-+= ====================== = +\n");
	printf("-|          메뉴             |\n");
	printf("-+= ====================== = +\n");
	printf("-|      1. 도서 추가         |\n");
	printf("-|         [%02d/20]           |\n", listnumber);
	printf("-|      2. 도서 삭제         |\n");
	printf("-|      3. 도서 정렬         |\n");
	printf("-|      4. 도서 검색         |\n");
	printf("-|      5. 도서 확인         |\n");
	printf("-+= ======================= =+\n");

}

MenuToMax(int listnumber){

	printf("-+= ====================== = +\n");
	printf("-|          메뉴             |\n");
	printf("-+= ====================== = +\n");
	printf("-|      1. 도서 삭제         |\n");
	printf("-|      2. 도서 정렬         |\n");
	printf("-|      3. 도서 검색         |\n");
	printf("-|      4. 도서 확인         |\n");
	printf("-|                           |\n");
	printf("-|      저장된 도서 수       |\n");
	printf("-|         [%02d/20]           |\n", listnumber);
	printf("-+= ======================= =+\n");

}

int initialization(_stBook list[], _stBook booklist[]) {

	int booknumber = 0;
	for (int i = 0; i < MAX; i++) list[i] = booklist[i];

	for (int i = 0; i < MAX; i++) // 번호 초기화
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