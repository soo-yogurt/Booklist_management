#include"book.h"
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>




//#define _loadingBar
//#define _last_number


organizeList(int num, _stBook list[]) {

	char userInput;

	system("cls");

	while (1) {
		printf("�޴�  [1�� : ���ݼ�]    [2�� : ���� ����]    [3�� : ������]    [esc : ���ư���]\n");
		printf("�Է� : ");

		userInput = _getch();

		if (userInput == '1') {
			system("cls");
			printf("1���� �����ϼ̽��ϴ�.\n");
			organizePrice(num, list);
		}


		if (userInput == '2') {
			system("cls");
			printf("2���� �����ϼ̽��ϴ�.\n");
			organizeDate(num, list);
		}

		if (userInput == '3') {
			system("cls");
			printf("3���� �����ϼ̽��ϴ�.\n");
			organizePage(num, list);
		}

		if (userInput == 27) {
			system("cls");
			printf("\n�޴��� ���ư��ϴ�..\n");
			break;
		}
		else {
			system("cls");
		}
	}
}


organizePage(int num, _stBook list[]) {

	_stBook _page[MAX];

#ifdef _loadingBar
	printf("loading [              ]");
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b");
	for (int i = 0; i < 5; i++) {
		printf("**");
		Sleep(500);
	}
#endif _loadingBar
	system("cls");


	for (int j = 0; j < num - 1; j++) {
		for (int i = 0; i < num - 1; i++) {
			if (list[i].page > list[i + 1].page) {
				_page[i] = list[i];
				list[i] = list[i + 1];
				list[i + 1] = _page[i];
			}
		}
	}

	printf("============================= �������� ���� ���� ���� ����մϴ�. ==================================\n");
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



organizeDate(int num, _stBook list[]) {

	_stBook Date[MAX];

#ifdef _loadingBar
	printf("loading [              ]");
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b");
	for (int i = 0; i < 5; i++) {
		printf("**");
		Sleep(500);
	}
#endif _loadingBar
	system("cls");

	for (int j = 0; j < num - 1; j++) {  // ���� ������ ����
		for (int i = 0; i < num - 1; i++) {
			if (list[i].date.year < 23 && list[i + 1].date.year < 23) { // 2000�⵵ ���� �� ��
				if (list[i].date.year > list[i + 1].date.year) {
					Date[i] = list[i];
					list[i] = list[i + 1];
					list[i + 1] = Date[i];
				}
			}
			else if (list[i].date.year < 23 && list[i + 1].date.year >= 23) { // 2000�⵵ ���Ŀ� 2000�⵵ ����
				Date[i] = list[i];
				list[i] = list[i + 1];
				list[i + 1] = Date[i];
			}
			else if (list[i].date.year >= 23 && list[i + 1].date.year >= 23) { // 2000�⵵ ���� �� ��
				if (list[i].date.year > list[i + 1].date.year) {
					Date[i] = list[i];
					list[i] = list[i + 1];
					list[i + 1] = Date[i];
				}
			}
			else if (list[i].date.year == list[i + 1].date.year) { // year[i] == year[i + 1]
				if (list[i].date.month > list[i + 1].date.month) // month ��
				{
					Date[i] = list[i];
					list[i] = list[i + 1];
					list[i + 1] = Date[i];
				}
				else if (list[i].date.month == list[i + 1].date.month) { // month[i] == month[i + 1]
					if (list[i].date.day > list[i + 1].date.day) { // day ��
						Date[i] = list[i];
						list[i] = list[i + 1];
						list[i + 1] = Date[i];
					}
				}
			}
		}
	}

	printf("================================= ������ �������� ����մϴ� =======================================\n");
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



organizePrice(int num, _stBook list[]) {


	_stBook price[MAX];
#ifdef _loadingBar	
	printf("loading [              ]");
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b");
	for (int i = 0; i < 5; i++) {
		printf("**");
		Sleep(500);
	}
#endif _loadingBar
	system("cls");

#ifdef _last_number
	printf("last_number : %d\n", num);
#endif _last_number

	for (int j = 0; j < num - 1; j++) {
		for (int i = 0; i < num - 1; i++) {
			if (list[i].price > list[i + 1].price) {
				price[i] = list[i];
				list[i] = list[i + 1];
				list[i + 1] = price[i];
			}
		}
	}

	printf("=================================  ������ ���� å���� ����մϴ�. ==================================\n");
	printf("[������ȣ] |\t   [title]\r\t\t\t\t\t[price]  \t[author]\t[page]\t\t[Date]\n");
	printf("-----------+----------------------------------------------------------------------------------------\n");
	Showlist(num, list);
	printf("\n\n\n                             [esc]");

	while (1) {

		char kib;

		kib = _getch();
		if (kib == 27)
			break;
	}
	system("cls");

}