#pragma once
#define NAME_MAX 20
#define SEX_MAX 4
#define TEL_MAX 13    // 有/0
#define ADDR_MAX 100

//！！！！前置声明！！！！
typedef struct SeqList contact;

//用户数据(姓名，性别，年龄，地址，电话
typedef struct PersonInfo

{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char addr[ADDR_MAX];
	char tel[TEL_MAX];
}PeoInfo;

//初始化通讯录
void InitContact(contact* con);
//添加通讯录数据
void AddContact(contact* con);
//删除通讯录数据
void DelContact(contact* con);
//展示通讯录数据
void ShowContact(contact* con);
//查找通讯录数据
int FindContact(contact* con,char name[NAME_MAX]);
//修改通讯录数据
void ModifyContact(contact* con);
//销毁通讯录数据
void DestroyContact(contact* con);
