#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"


int main() {
	ST s;//�ṹ��

	STInit(&s);//���βδ�ʵ�εĵ�ַ

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
