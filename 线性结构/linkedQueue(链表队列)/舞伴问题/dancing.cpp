#include <iostream>
#include "linkedQueue.h"

using namespace std;

int main()
{
	linkedQueue<char> men;
	linkedQueue<char> women;
	
	int n1, n2, n3, n, temp1, temp2;
	char _char;
	
	cout << "��������������������";
	cin >> temp1;
	n1 = temp1;
	cout << "�������������飨��д��ĸ��ʾ����";
	while(temp1--)
	{
		cin >> _char;
		men.enQueue(_char);
	}
	cout << "������Ů������������";
	cin >> temp2;
	n2 = temp2;
	cout << "������Ů�����飨Сд��ĸ��ʾ����";
	while(temp2--)
	{
		cin >> _char;
		women.enQueue(_char);
	}
	cout << "����������������";
	cin >> n3;
	
	if(n1 <= n2)
		n = n1 * n3;
	else
		n = n2 * n3;
	while(n--)
	{
		cout << men.getFront();
		cout << women.getFront();
		cout << " ";
		men.enQueue(men.getFront());
		women.enQueue(women.getFront());
		men.outQueue();
		women.outQueue();
	}
}