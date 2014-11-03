float calpostfix(string _string, float array[])
{
  stack<float> _stack;
  float temp = 0;
  int k = 1;
  string::iterator itr = _string.begin();

  while(itr != _string.end())
  {   
      int findNum = 0;
      if(*itr >= '0' && *itr <= '9')
      {
          while((*itr >= '0' && *itr <= '9') || *itr == '.')
          {
              findNum = 1;
              itr++;
          }
          if(findNum)      //�ҵ�һ�������е������ַ���Ȼ�󽫳������ݵ�����ѹ��ջ��
          {
              _stack.push(array[k]);
              k++;
              //cout << "stack: ";
              //_stack.print();
          }
          itr--;
      }
      else if(*itr == '+')   //���ݲ�ͬ�ķ��ţ�����ջ��������Ԫ�أ�������Ӧ������
      {
          temp = _stack.top();
          _stack.pop();
          //cout << "stack: ";
           //_stack.print();
          temp = temp + _stack.top();
          _stack.pop();
          //cout << "stack: ";
           //_stack.print();
          _stack.push(temp);
          //cout << "stack: ";
           //_stack.print();
      }
      else if(*itr == '-')
      {
          temp = _stack.top();
          _stack.pop();
          //cout << "stack: ";
           //_stack.print();
          temp = _stack.top() - temp;
          _stack.pop();
          //cout << "stack: ";
          // _stack.print();
          _stack.push(temp);
          //cout << "stack: ";
           //_stack.print();
      }
      else if(*itr == '*')
      {
          temp = _stack.top();
          _stack.pop();
          //cout << "stack: ";
           //_stack.print();
          temp = _stack.top() * temp;
          _stack.pop();
          //cout << "stack: ";
           //_stack.print();
          _stack.push(temp);
          //cout << "stack: ";
           //_stack.print();
      }
      else if(*itr == '/')
      {
          temp = _stack.top();
          _stack.pop();
          //cout << "stack: ";
           //_stack.print();
          temp = _stack.top() / temp;
          _stack.pop();
          //cout << "stack: ";
           //_stack.print();
          _stack.push(temp);
          //cout << "stack: ";
           //_stack.print();
      }
      itr++;
  }
  return _stack.top();
}