#include <iostream>
#include "BTree.h"
#include "InThBTree.h"
#include "PreThBTree.h"
#include "PostThBTree.h"

using namespace std;

void first();
void second();
void third();
void fourth();

int main()
{
	char choice = '9';
	cout << "            ----------��ӭ����������������----------            " <<endl;
	
	while(choice != '0')
	{
		cout << "ʹ����ͨ�������밴��    1" <<endl;
		cout << "ʹ�����������������밴��2" << endl;
		cout << "ʹ�����������������밴��3" << endl;
		cout << "ʹ�ú��������������밴��4" << endl;
		cout << "�˳�ʹ���밴��          0" <<endl;
		cout << "ע��������������ʱ�������룺0��������ĸ" <<endl;
		cin >> choice;
		switch(choice)
		{
			case '1':
				first();
				break;
			case '2':
				second();
				break;
			case '3':
				third();
				break;
			case '4':
				fourth();
				break;
			default:
				break;			
		}
	}
	return 0;
}

void first()
{
	BTree<char> myBTree;
	BTree<char>::Node* root;
		
	root = myBTree.createBTree();
	cout <<endl;
	cout << "���������������  ";
	myBTree.printBTree(root);
	cout <<endl;
	cout <<endl;
	cout << "�ݹ����������      " ;
	myBTree.inorder(root);
	cout << endl;
	cout <<endl;
	cout << "�ǵݹ����������    " ;
	myBTree.inorder();
	cout << endl;
	cout <<endl;
	cout << "�ݹ����������      " ;
	myBTree.preorder(root);
	cout << endl;
	cout <<endl;
	cout << "�ǵݹ����������    " ;
	myBTree.preorder();
	cout << endl;
	cout <<endl;
	cout << "�ݹ���������      " ;
	myBTree.postorder(root);
	cout << endl;
	cout <<endl;
	cout << "�ǵݹ���������    " ;
	myBTree.postorder();
	cout << endl;
	cout <<endl;
	cout << "���������          " ;
	myBTree.leverorder();
	cout << endl;
	cout <<endl;
}

void second()
{
	PreThBTree<char> myPreThBTree;
	PreThBTree<char>::Node* root;
	
	root = myPreThBTree.createPreThBTree();
	cout <<endl;
	cout << "�ǵݹ����������    ";
	myPreThBTree.thPreOrder();
	cout <<endl;
	cout <<endl;
}

void third()
{
	InThBTree<char> myInThBTree;
	InThBTree<char>::Node* root;
	
	root = myInThBTree.createInThBTree();
	cout <<endl;
	cout << "�ǵݹ����������    ";
	myInThBTree.thInOrder();
	cout <<endl;
	cout <<endl;
}

void fourth()
{
	PostThBTree<char> myPostThBTree;
	PostThBTree<char>::Node* root;
	
	root = myPostThBTree.createPostThBTree();
	cout <<endl;
	cout << "�ǵݹ���������    ";
	myPostThBTree.thPostOrder();
	cout <<endl;
	cout <<endl;
}