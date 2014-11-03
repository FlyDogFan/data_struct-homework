#include <iostream>
#include <string>
#include "sequenceList.h"
#define max 100

using namespace std;

int main()
{
	sequenceList<string> projectName;
	string name;
	sequenceList<double> projectInterest;
	double interest;
	int position;
	char choice;
	
	cout << endl;
	cout << "---------------------�����������ʱ����ϵͳ---------------------" << endl;
	cout << "---------------------------------------------------------------" << endl;
	cout << endl;
	cout << "                  �����Ŀ-------------------1" << endl;
	cout << endl;
	cout << "                  ɾ����Ŀ-------------------2" << endl;
	cout << endl;
	cout << "                  ������Ŀ-------------------3" << endl;
	cout << endl;
	cout << "                  �鿴ȫ����Ŀ---------------4" << endl;
	cout << endl;
	cout << "                  �˳�ϵͳ-------------------0" << endl;
	cout << endl;
	
	cout << "��������Ҫ���еĲ����ı�ţ�";
	cin >> choice;
	while(choice != '0')
	{
		switch(choice)
		{
			case '1':
				cout << "������Ҫ��ӵ���Ŀ���ƺ����ʣ�";
				cin >> name;
				projectName.addData(name);
				cin >> interest;
				projectInterest.addData(interest);
				break;
			case '2':
				cout << "������Ҫɾ������Ŀ���ƣ�";
				cin >> name;
				position = projectName.find(name);
				projectName.deleteData(position);
				projectInterest.deleteData(position);
				break;
			case '3':
				cout << "������Ҫ���ҵ���Ŀ���ƣ�";
				cin >> name;
				cout << "����Ŀ������Ϊ��";
				cout << projectInterest.getData(projectName.find(name)) << endl;
				break;
			case '4':
				for(int i = 1; i <= projectName.getLast(); i++)
				{
					cout << i << ". ";
					cout << projectName.getData(i) << " ";
					cout << projectInterest.getData(i);
					cout << endl;
				}
				break;	
		}
		cout << "��������Ҫ���еĲ����ı�ţ�";
		cin >> choice;
	}
	
	return 0;
}