#ifndef _POINT_H_		// 헤더파일의 중복포함 문제를 해결하기 위한 조건부 컴파일 지시자
#define _POINT_H_

typedef struct
{
	int x;
	int y;
} Point;

#endif					// #ifndef, #ifdef와 세트로 넣어주기!
