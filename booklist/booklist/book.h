#ifndef __BOOK_H__
#define __BOOK_H__
#define MAX 20
#define _CRT_SECURE_NO_WARNINGS
#define LINE 65



typedef struct {
	char year;
	char month;
	char day;
}_stDate;

typedef struct {
	char title[20];
	int price;
	char author[10];
	int page;
	_stDate date;
} _stBook;

Menu(int listnumber);
MenuToMax(int listnumber);
int initialization(_stBook list[], _stBook booklist[]);

int addBook(int booknumber, _stBook list[]);

int deleteBook(int num, _stBook list[], _stBook booklist[]);

organizePrice(int num, _stBook list[]);
organizeDate(int num, _stBook list[]);
organizeList(int num, _stBook list[]);
organizePage(int num, _stBook list[]);

CheckList(int num, _stBook list[]);

searcHaBook(int num, _stBook list[]);

Showlist(int num, _stBook list[]);

#endif