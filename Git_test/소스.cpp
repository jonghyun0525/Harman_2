#include <stdio.h>

#define ABS(val) ((val) < 0) ? - (val) : (val))

int abs(int val);
float abs(float val);

int main()
{
	int i = -1;
	float a = 2.0;
	printf ("i가 %d 일 때 i의 절대값은 %d 입니다\n", i, ABS(-1);
	printf ("a가 %f 일 때 a의 절대값은 %f 입니다\n", a, ABS(-2.0);
	return 0;
}
int abs(int val)			// argument val의 절대값 반환
{
	return (val < 0) ? -val : val;

}
float abs(float val)		// argument val의 절대값 반환
{
	return (val < 0) ? -val : val;
}