#pragma once
#include"allheader.h"
#include"Var.h"
class Manvar{
public :
	/*
	*�����µı���
	*��Դ�����е�����ֵ����ʱ�����浽vartab��
	*���ر���������
	*/
	static int addvar(Var &v);
	
	/*
	*�Ա��������ұ�����λ��
	*����0��ʾû���ҵ�
	*/
	static int name2index(string name);
	
	/*
	*�Ա���λ�÷��ر���Var,index��1��ʼ��0��ʾ������
	*/
	static Var& index2var(int index);
	
public :
	//vartab������
	static vector<Var> vartab;
	
	//varindex����string��Ϊ��������֮���Ա��������ұ�����λ��
    static map<string, int> varindex;
	
	//curnum ��ǰ���������Ŵ�0��ʼ
	static int curnum;
};