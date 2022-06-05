#include"book.h"
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>


#define _search




searcHaBook(int num, _stBook list[]) {

	char searchTitle[20];
	int number = 1;

	system("cls");

#ifdef _search
	printf("================================== 검색가능한 도서 목록 ============================================\n");
	printf("[도서번호] |\t   [title]\r\t\t\t\t\t[price]  \t[author]\t[page]\t\t[Date]\n");
	printf("-----------+----------------------------------------------------------------------------------------\n");
	Showlist(num, list);
	printf("\n\n");
#endif _search

	while (1) { // 여러번 검색을 위한 반복문
		printf("제목으로 검색 : ");
		scanf_s(" %[^\n]s", searchTitle, sizeof(searchTitle));

		printf("\n=================================== [검색한 도서 목록] ===========================================\n");
		printf("    [title]\r\t\t\t[price]  \t[author]\t[page]\t\t[Date]\t     [도서번호]\n");
		printf("--------------------------------------------------------------------------------------------------\n");
		for (int i = 0; i < MAX; i++) {
			if (strcmp(searchTitle, list[i].title) == 0) {
				printf("    %02d\t   |\t", i + 1);
				printf("%s", list[i].title);
				printf("\r\t\t\t\t\t%d 원\t", list[i].price);
				printf(" %s", list[i].author);
				printf("\r\t\t\t\t\t\t\t\t\t%4d\t\t", list[i].page);
				printf("%02d.%02d.%02d", list[i].date.year, list[i].date.month, list[i].date.day);
				printf("\n");
				printf("-----------+--------------------------------------------------------------------------------------\n");
			}
		}
		printf("--------------------------------------------------------------------------------------------------\n");
		printf("\n계속 검색한다. [1번]\n메뉴로 돌아가기[아무키나 눌린다]\n");

		char answer;
		answer = _getch();
		if (answer == '1') {
			continue;

		}
		else {
			system("cls");
			break;
		}
	}
}
