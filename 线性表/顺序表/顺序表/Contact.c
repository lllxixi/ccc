#include"Contact.h"
#include"SeqList.h"


//��ʼ��ͨѶ¼
void InitContact(contact* con) {
	SLInit(con);
}

//���ͨѶ¼����(�������Ա����䣬��ַ���绰
void AddContact(contact* con) {
	PeoInfo info;
	printf("��������ϵ��������\n");
	scanf_s("%s", info.name);

	printf("��������ϵ���ձ�\n");
	scanf_s("%s", info.sex);

	printf("��������ϵ�����䣺\n");
	scanf_s("%d", &info.age);

	printf("��������ϵ�˵�ַ��\n");
	scanf_s("%s", info.addr);

	printf("��������ϵ�˵绰��\n");
	scanf_s("%s", info.tel);

	//�������������,β��
	SLPushBack(con, info);
}

int FindContact(contact* con, char name[NAME_MAX]) {
	for (int i = 0; i < con->size; i++) {
		if ( 0 == strcmp ( con -> a[i].name,name ) ) {
			return i;
		}
	}
	return -1;
}

//ɾ��ͨѶ¼����
void DelContact(contact* con)
{
	char name[NAME_MAX];
	printf("������Ҫɾ������ϵ�ˣ�");
	scanf_s("%s", name);
	int find = FindContact(con, name);
	if (find<0) {
		printf("û�и���ϵ�ˣ�");
		return;
	}
	SLErase(&con, find);
	printf("ɾ���ɹ���");
}