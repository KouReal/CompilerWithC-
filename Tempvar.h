#pragma once
#include"allheader.h"
#include"Var.h"
class Tempvar{
public :
	/*
	*����һ���µ���ʱ�����ı�ţ�û����ʵ�ı������
	*�����ķ������������м����ļ�¼
	*/
	static int newtemp();
	/*
	*�����µ���ʱ����,����һ������(-1*curnum-1)
	*�����ֵ��curnum+1
	*/
	static int addvar(Var v);
	
	/*
	*������λ�÷�����ʱ����
	*/
	static Var& index2var(int index);
public :
	static vector<Var> vartab;
	static int curnum;
};