#include <iostream>
#include <string>
#include <cmath>

#include "stack.h"
#include "infixToPostfix.h"
#include "calPostfix.h"
#include "toFloat.h"

using namespace std;

string nagtive(string _string)
{
    string::iterator itr = _string.begin();
    if(*itr == '-')
    {
        itr = _string.insert(itr, '0');
    }
    while(itr != _string.end())
    {
        if(*itr == '(' && *(itr+1) == '-')
        {
            itr = _string.insert(itr+1, '0');
            itr = itr + 2;
        }
        else
        {
            itr++;
        }
    }
    return _string;
}

int main()
{
    string infix, postfix;         //��׺����׺���ʽ 
    float value[100];              //��װ���ʽ�е����ݣ�Ϊ�������ݵ���ȡ��׼��
    float result = 0;              //������
    for(int i = 0 ; i < 100; i++)
    {
      value[i] = 0;
    }
    cout << "Infix: ";            //��ʾ�û�������׺���ʽ
    cin >> infix;
    infix = nagtive(infix);
    /*cout << endl;
    cout << "infix to postfix............" << endl;
    cout << endl;*/
    postfix = toPostfix( infix );
    /*string::iterator itr = postfix.begin();
    cout << "Postfix: ";
    cout << *itr++;
    while( itr != postfix.end() )
    {
        cout << *itr++;              //�����׺���ʽ
    }
    cout << endl; */              
    toFloat(value, postfix);

    /*cout << endl;
    cout << "calculating postfix............" << endl;
    cout << endl;*/
    result = calpostfix(postfix, value);
    cout << endl;
    cout << "Result: " ;
    cout << result << endl;           //������ս��
    return 0;
}
