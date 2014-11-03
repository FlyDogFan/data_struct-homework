#ifndef sequenceList_H_INCLUDED
#define sequenceList_H_INCLUDED 

#include <iostream>
#define max 100

using namespace std;

typedef int position;
template <typename ElemType>
class sequenceList
{
private:
	ElemType data[max];
	int last;
	
public:
	sequenceList()
	{
		last = 0;
	}
	
	~sequenceList()
	{
		
	}
	
	int getLast()
	{
		return last;
	}
	int addData(ElemType x)               //�����һλ��������
	{
		last += 1;
		data[last] = x;
		return last;
	}
	void addData(ElemType x, position p)   //��ָ��λ�ò�������
	{
		position q;
		
		if(last == 0)
		{
			data[1] = x;
			last += 1;
		}
		else
		{
			if(last == max -1)
				cout << "Full!" << endl;
			else if(p > last + 1 || p <= 0)
				cout << "the position is illegal!" << endl;
			else
			{
				for(q = last + 1; q > p; q--)  //��Ŀ��λ�ú�����������κ���һλ
				{
					data[q] = data[q-1];
				}
				data[p] = x;
				last += 1; 
			}
		}
		
	}
	
	void deleteData(position p)
	{
		position q;
		if(p > last)
		{
			cout << "the position is not in the list!" << endl;
		}
		else
		{
			for(q = p; q < last; q++)   //��Ŀ��λ�ú��������ǰ�ƣ�����Ŀ��λ�õ�����
			{
				data[q] = data[q + 1];
			}
			last -= 1;	
		}
	}
	
	position find(ElemType x)
	{
		for(position p = 1; p <= last; p++)
		{
			if(data[p] == x)
				return p;
		}
	}
	
	/*void find(ElemType x)
	{
		cout << "the position: ";
		for(position p = 1; p <= last; p++)
		{
			if(data[p] == x)
				cout << p << " ";
		}
		cout << endl;
	}*/
	
	ElemType getData(position p)
	{
		return data[p];
	}
	
	void makeNull()
	{
		last = 0;
	}
	
	int first()
	{
		if(last == 0)
		{
			cout << "the list is empty!" << endl;
			return 0;
		}
		return data[1];
	}
	
	int end()
	{
		if(last == 0)
		{
			cout << "the list is empty!" << endl;
			return 0;
		}
		return data[last];
	}
	
	void printList()
	{
		for(int i = 1; i <= last; i++)
	 	{
	 		cout << data[i] << " ";
	 	}
	 	cout << endl;
	}	
};

#endif 