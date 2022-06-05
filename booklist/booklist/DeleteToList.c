#include"book.h"
#include<stdio.h>
#include<string.h>
#include<windows.h>




int deleteBook(int num, _stBook list[], _stBook booklist[]) {

	// 삭제 성공, 실패 확인
	int K = 0;
	//재입력 여부 대답
	char answer[3];
	//삭제 할 책 이름
	char deleteTitle[20];

	system("cls");

	printf("\n============================================== 도서 목록 ===========================================\n");
	printf("-----------+----------------------------------------------------------------------------------------\n");
	printf("[도서번호] |\t   [title]\r\t\t\t\t\t[price]  \t[author]\t[page]\t\t[Date]\n");
	printf("-----------+----------------------------------------------------------------------------------------\n");
	Showlist(num, list);

	printf("\n삭제 할 도서명을 입력하세요 : ");
	scanf_s(" %[^\n]s", deleteTitle, sizeof(deleteTitle));

		// 입력한 제목을 찾는다.


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
			printf("\ni는 %d\nnum은 %d\n", i, num);
#endif _delete_check
			num--;
		}

	}
#ifdef _delete_check
	printf("\nnum 위치 책 제목은 \"%s\"입니다.\n", list[num - 1].title);
	
	for (int i = 0; i < num; i++) {
		printf("%2d.\t %s\n", i + 1, list[i].title);
	}
#endif _delete_check
	system("cls");
	
	if (K == 0) {
		printf("책을 삭제 할 수 없습니다.\n");
	}
	else {
		printf("정상적으로 삭제되었습니다.\n");
		K = 1;
	}
	
	return num;
}
