// #include <iostream>	// C++

#include <stdio.h>
#include <malloc.h>

char buf[200];
void MemoryDump(int start, int length);		// 함수의 proto_type | 함수의 원형

int main(int argc, char *argv[])		// >PointerSample 10000 500 : //Comand Line 명령어
										// 10000 : Start memory 주소
										// 500 : Dump 할 메모리 크기

{
	int start = 0x09000000;
	int length = 500;

	char c = 'A';
	int i = 1;
	float a = 2.0;
	double d = 3.14;
	void *p = malloc(100);		// (void*) buf//0x80000000; // 그저 주소일뿐...

	*(double *)p = d;

	MemoryDump((int)buf, length);

	//printf("c = %8c [0x08x]\n", c, &c);			// %c = 문자입력
	//printf("c = %8d [0x08x]\n", i, &i);			// %d = 정수를 10진수로 입력
	//printf("c = %8f [0x08x]\n", a, &a);			// %f = float 형 실수 입력
	//printf("c = %8f [0x08x]\n", d, &d);			// %f = float 형 실수 입력
	//printf("c = %8f [0x08x]\n", *(double*)p, &p);

}

void MemoryDump(int start, int length)
{
	char *cp = buf;		// (char*)start;
	//void *vp = (void *)start;
	int i = 0;			// index 변수 초기값

	while (i < length)	// 수행조건 : i < length
	{
		//char c = *cp = (char *)vp;
		//char c = *cp;
		unsigned char c = *((char *)cp + i++);
		//i++;
		printf("%02x ", c);

	}


	//for

	//do {}while

}