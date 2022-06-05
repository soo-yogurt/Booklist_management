#include"book.h"
#include<stdio.h>

Showlist(int num, _stBook list[])
{	
	for (int i = 0; i < num; i++) {
		printf("    %02d\t   |\t", i + 1);
		printf("%s", list[i].title);
		printf("\r\t\t\t\t\t%d ¿ø\t", list[i].price);
		printf(" %s", list[i].author);
		printf("\r\t\t\t\t\t\t\t\t\t%4d\t\t", list[i].page);
		printf("%02d.%02d.%02d", list[i].date.year, list[i].date.month, list[i].date.day);
		printf("\n");
		printf("-----------+----------------------------------------------------------------------------------------\n");
	}
}

