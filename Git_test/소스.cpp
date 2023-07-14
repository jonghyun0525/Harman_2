#include <stdio.h>
#define ABS(x) ((x) < 0) ? -(x) : (x)	// 매크로 함수는 자료 독립적!

void swap_val(int a, int b);
void swap(int *a, int *b);

int main()
{
	int i = -100;
	int j = 100;
	printf("a: %d	b: %d\n", i, j);		// 원본 데이터
	printf(".... swap processing ....\n");
	swap(&i, &j);
	/*swap_val(i, j);*/	// call-by-value

	printf("a: %d	b: %d\n", i, j);
	//float a = -2.0;
	//printf("i 가 %d 일때 i의 절대값은 %d 입니다", i, ABS(i));
	//printf("a 가 %f 일때 a의 절대값은 %f 입니다", a, ABS(a));
}
void swap(int *a, int *b)					// call-by-reference: 주소, 포인터
{
	int c = *a;
	printf("	.... In swap function ....\n");
	printf("	a: %d	b: %d\n", *a, *b);	// 원본 데이터
	printf("	.... swap processing ....\n");
	*a = *b; *b = c;
	printf("	a: %d	b: %d\n", *a, *b);	// 처리 후 데이터
}
void swap_val(int a, int b)					// call-by-value
{
	int c = a;
	printf("	.... In swap function ....\n");
	printf("	a: %d	b: %d\n", a, b);	// 원본 데이터
	printf("	.... swap processing ....\n");
	a = b; b = c;
	printf("	a: %d	b: %d\n", a, b);	// 처리 후 데이터
}

//int abs(int val);
//float fabs(float val);
//
//int main()
//{
//    int i = -1;
//    float a = -2.0;
//    printf("i 가 %d 일때 i의 절대값은 %d 입니다", i, abs(i));
//    printf("a 가 %f 일때 a의 절대값은 %f 입니다", a, fabs(a));
//}
//
//int abs(int val)    // argument val의 절대값 반환
//{
//    if (val < 0) return -val;
//    return val;
//
//    /*return (val < 0) ? -val : val;*/
//}
//
//float fabs(float val)
//{
//    return (val < 0) ? -val : val;
//}