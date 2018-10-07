#include"Tempvar.h"
/*
*����һ���µ���ʱ�����ı�ţ�û����ʵ�ı������
*�����ķ������������м����ļ�¼
*/
vector<Var> Tempvar::vartab;
int Tempvar::curnum = 0;
int Tempvar::newtemp()
{
	int index = -1*curnum-1;
	//��vartab��ռһ��λ��
	Var evar("","notype",0,0);
	vartab.push_back(evar);
	curnum++;
	return index;
}
/*
*�����µ���ʱ����,����һ������(-1*curnum-1)
*�����ֵ��curnum+1
*/
int Tempvar::addvar(Var v)
{
	int index = -1*curnum-1;
	vartab.push_back(v);
	curnum++;
	return index;
}
	
/*
*����ʱ������ŷ�����ʱ���������ã������޸ģ�
*/
Var& Tempvar::index2var(int index)
{
	int pos = -1*index - 1;
	if(pos >= 0 && pos < curnum){
		return vartab[pos];
	}
	else{
		cout << "tempvar index out of range\n";
	}
}
