#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"


int main() {
	ST* s;

	STInit(&s);

	STPush(&s, 1);
	STPush(&s, 2);
	STPush(&s, 3);
	STPush(&s, 4);

	DataType StackTop(&s);

	STPop(&s);
	STPop(&s);
	STPop(&s);

	return 0;
}
