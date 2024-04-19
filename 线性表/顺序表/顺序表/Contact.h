#pragma once
#define NAME_MAX 20
#define SEX_MAX 4
#define TEL_MAX 13    // ��/0
#define ADDR_MAX 100

//��������ǰ��������������
typedef struct SeqList contact;

//�û�����(�������Ա����䣬��ַ���绰
typedef struct PersonInfo

{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char addr[ADDR_MAX];
	char tel[TEL_MAX];
}PeoInfo;

//��ʼ��ͨѶ¼
void InitContact(contact* con);
//���ͨѶ¼����
void AddContact(contact* con);
//ɾ��ͨѶ¼����
void DelContact(contact* con);
//չʾͨѶ¼����
void ShowContact(contact* con);
//����ͨѶ¼����
int FindContact(contact* con,char name[NAME_MAX]);
//�޸�ͨѶ¼����
void ModifyContact(contact* con);
//����ͨѶ¼����
void DestroyContact(contact* con);
