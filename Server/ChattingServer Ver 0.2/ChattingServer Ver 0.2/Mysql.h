#pragma once
#pragma comment(lib, "libmysql.lib")
#include "stdafx.h"
#include <WinSock2.h>
#include <mysql.h>
#include "UserInfo.h"
#include <afxsock.h>



#define MAX_STRINGLEN 10
#define DB_ADDRESS "localhost"
#define DB_ID "root"
#define DB_PASS "a123123"
#define DB_NAME "chattingdb"
class Mysql
{
private:
	User user;
	UserS users;
	MYSQL_ROW row;		// mysql 의 행을 맡는다.
	MYSQL_RES *m_res;	// mysql의 결과를 받아온다
	MYSQL mysql;		// mysql의 전체적인 연동을 담당한다.
public:
	bool Init(void);
	bool Enroll(void);
	bool Secession(void);
	bool Login(void);
	void SetUser(User&);
	void SetUserS(UserS&);
	char* GetUserNickName(void);

};