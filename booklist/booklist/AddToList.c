#include"book.h"
#include<stdio.h>
#include<string.h>
#include<windows.h>



int addBook(int booknumber, _stBook list[]) {

		int i = booknumber;
		printf("======================================  도서를 추가 합니다. ========================================\n");
			printf("제목을 입력하세요 : ");
			scanf_s(" %[^\n]s", list[i].title, sizeof(list[i].title));

			printf("가격을 입력하세요 : ");
			scanf_s("%d", &list[i].price, sizeof(list[i].price));

			printf("저자를 입력하세요 : ");
			scanf_s(" %[^\n]s", list[i].author, sizeof(list[i].author));

			printf("페이지를 입력하세요 : ");
			scanf_s("%d", &list[i].page, sizeof(list[i].page));

			printf("발행연도를 입력하세요 ex)2021 => 21\n");

			printf("year : ");
			scanf_s("%02d", &list[i].date.year, sizeof(list[i].date.year));

			printf("month : ");
			scanf_s("%02d", &list[i].date.month, sizeof(list[i].date.month));

			printf("day : ");
			scanf_s("%02d", &list[i].date.day, sizeof(list[i].date.day));

			booknumber++;

			return booknumber;
	
}