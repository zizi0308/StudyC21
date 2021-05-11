#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
	로그인 프로그램
	1. id와 password를 저장하고 파일이름은 password.txt로 저장한다.
	2. 구조체 Login 변수에 id, password 멤버에 각각 저장을 시키고
	3. 키보드로 입력되는 아이디와 패스워드를 비교하여 일치하면 "로그인되었습니다."
	   또는 "id를 찾을 수 없습니다." 라는 메세지를 출력하는 프로그램 작성
*/
typedef struct login
{
	char* id[20];
	char password[20];
}Login;

int main(void)
{
	Login member;

	FILE* fp;
	int res;
	char temp1[20];								// 입력할 아이디를 받아오기 위한 변수
	char temp2[20];								// 입력할 비밀번호를 받아오기 위한 변수
	fp = fopen("password.txt", "r");			// 파일포인터가 fopen을 호출하면 stream파일이 만들어지고, 거기있는 데이터를 버퍼를 통해 읽게할 수 있다.
	if (fp == NULL)								// 파일이 존재하지 않을 때
	{
		printf("파일이 열리지 않았습니다");

		return 1;								// 현재 실행중인 함수를 끝낸다는 의미
	}

	printf("아이디를 입력하세요 : ");
	scanf("%s", temp1);
	printf("비밀번호를 입력하세요 : ");
	scanf("%s", temp2);

	while (1)
	{
		res = fscanf(fp, "%s%s", &member.id, &member.password);	// res는 종료조건 쓰기위해 나머지는 값 받아오기위해
		if (res == EOF)			// res이 데이터를 다 읽어서 EOF를 반환하면 종료
		{
			break;
		}
		//printf("%s%s", member.id, member.password);
		if (strcmp(member.id, temp1) == 0)						// 멤버아이디와 입력값을 비교값이 0이면 문자열 일치
		{
			printf("로그인에 성공했습니다\n");
		}
		if (strcmp(member.password, temp2) == 0)
		{
			printf("로그인에 성공했습니다\n");
		}
		else
		{
			printf("로그인에 실패했습니다. 아이디와 비밀번호를 확인해주세요.\n");
		}

		fclose(fp);

		return 0;
	}
}