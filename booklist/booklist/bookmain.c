#include"book.h"
#include<stdio.h>
#include<windows.h>


#define _booknumber



_stBook booklist[MAX] = {
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"개똥벌레", 17000, "신형원", 50, {20,05,05}},
	{"C프로그래밍 기초", 30000, "철수", 550, {97.03,01}},
	{"JAVA는 너무 어렵다", 27500, "민수", 450, {01,11,11}},
	{"리룩스마스터", 25000, "권소리", 1050, {22,02,10}},
	{"안녕하세요", 23000, "누구세요", 1250, {12,02,10}},
	// 10개
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"모두의 딥러닝", 20000, "딥러닝", 300, {22,01,01}},
	{"개똥벌레", 17000, "신형원", 50, {20,05,05}},
	{"C프로그래밍 기초", 30000, "철수", 550, {97.03,01}},
	{"JAVA는 너무 어렵다", 27500, "민수", 450, {01,11,11}},
	{"리룩스마스터", 25000, "권소리", 1050, {22,02,10}},
	{"안녕하세요", 23000, "누구세요", 1250, {12,02,10}}

};

_stBook list[MAX];






int main(void) {

	char input;
	int num = initialization(list, booklist);


	while (1) {
		if (num < 20) {
			Menu(num);
			printf("번호를 선택하세요 : ");

			input = _getch();

			system("cls");
			Menu(num);

			if (input == '1')
				num = addBook(num, list);
				system("cls");
			if (input == '2')
				num = deleteBook(num, list, booklist);
			if (input == '3')
				organizeList(num, list);
			if (input == '4')
				searcHaBook(num, list);
			if (input == '5')
				CheckList(num, list);
			else {
				system("cls");
			
			}
		}
		else {
			MenuToMax(num);
			printf("번호를 선택하세요 : ");

			input = _getch();

			if (input == '1')
				num = deleteBook(num, list, booklist);
			if (input == '2')
				organizeList(num, list);
			if (input == '3')
				searcHaBook(num, list);
			if (input == '4')
				CheckList(num, list);
			else {
				system("cls");

			}
		}
	}
	return 0;
}


/*
1. 도서검색 프로그램

- book.h 파일을 참조하여 다음의 프로그램을 작성하시오.
- 헤더파일의 도서 목록 20개로 초기화한다. : Blank Data 포함
- 다음의 메뉴가 동작하도록 구현하시오.
- +========================+
- |           메뉴            |
- +========================+
- | 1. 도서 추가              |
- | 2. 도서 삭제              |
- | 3. 도서 정렬              |
- | 4. 도서 검색              |
- | 5. 도서 확인              |
- +=======================+

- 도서 추가 : 최대 20개가 넘지 않도록 추가한다.
- 도서 삭제 : 도서명으로 검색 후 삭제한다.
- 도서 정렬 : 가격, 발행연도, 페이지 순으로 선택하여 정렬하여 출력한다.
- 도서 검색 : 도서명으로 검색하여 정보를 출력한다.
- 도서 확인 : 현재 등록된 도서 전체를 표시한다.

*/



