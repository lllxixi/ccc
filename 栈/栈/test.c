#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"


int main() {
	ST s;//结构体

	STInit(&s);//向形参传实参的地址

	STPush(&s, 1);
	STPush(&s, 2);
	STPush(&s, 3);
	STPush(&s, 4);

	printf("%d\n", STTop(&s));
	//DataType StackTop(&s);

	STPop(&s);
	STPop(&s);
	STPop(&s);

	printf("%d\n", STTop(&s));

	STDestroy(&s);


	return 0;
}
