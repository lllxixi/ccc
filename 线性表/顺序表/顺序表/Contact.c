#include"Contact.h"
#include"SeqList.h"


//初始化通讯录
void InitContact(contact* con) {
	SLInit(con);
}

//添加通讯录数据(姓名，性别，年龄，地址，电话
void AddContact(contact* con) {
	PeoInfo info;
	printf("请输入联系人姓名：\n");
	scanf_s("%s", info.name);

	printf("请输入联系人姓别：\n");
	scanf_s("%s", info.sex);

	printf("请输入联系人年龄：\n");
	scanf_s("%d", &info.age);

	printf("请输入联系人地址：\n");
	scanf_s("%s", info.addr);

	printf("请输入联系人电话：\n");
	scanf_s("%s", info.tel);

	//往表中添加数据,尾插
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

//删除通讯录数据
void DelContact(contact* con)
{
	char name[NAME_MAX];
	printf("请输入要删除的联系人：");
	scanf_s("%s", name);
	int find = FindContact(con, name);
	if (find<0) {
		printf("没有该联系人！");
		return;
	}
	SLErase(&con, find);
	printf("删除成功！");
}