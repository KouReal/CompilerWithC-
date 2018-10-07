#include"allheader.h"
#include"Manvar.h"
//vartab������
vector<Var> Manvar::vartab;
	
//varindex����string��Ϊ��������֮���Ա��������ұ�����λ��
map<string, int> Manvar::varindex;
	
//curnum ��ǰ����������
int Manvar::curnum = 0;
/*
*�����µı���
*/
int Manvar::addvar(Var &v)
{
	int index = curnum+1;
	vartab.push_back(v);
	varindex.insert(pair<string,int>(v.name,index));
	curnum++;
	return index;
}

/*
*�Ա��������ұ�����λ��
*/
int Manvar::name2index(string name)
{
	int pos = 0;
	map<string,int>::iterator it;
	it = varindex.find(name);
	if(it != varindex.end()){
		pos = it->second;
	}
	return pos;
}
	
/*
*�Ա���λ�÷��ر���Var
*/
Var& Manvar::index2var(int index)
{
	if(index>0 && index<=curnum){
		return vartab[index-1];
	}
	else{
		cout << "var index out of range\n";
	}
}

