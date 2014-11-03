#include <iostream>
#include <string>

#include "undirectedGraph.h"
#include "directedGraph.h"

void graph1();
void graph2();

int main()
{
	char choice = '3';
	cout << "            ----------��ӭ���ĵ�ͼ������----------            " <<endl;
	
	while(choice != '0')
	{
		cout << "ʹ������ͼ�밴��    1" <<endl;
		cout << "ʹ������ͼ�밴��    2" << endl;
		cout << "�˳�ʹ���밴��      0" <<endl;
		cout << "ע�������ÿո������" << endl;
		cin >> choice;
		switch(choice)
		{
			case '1':
				graph1();
				break;
			case '2':
				graph2();
				break;
			default:
				break;			
		}
	}
	return 0;
}

void graph1()
{
	undirectedGraph<string> graph;
	graph.createGraph();
	graph.traversal();
}

void graph2()
{
	directedGraph<string> graph;
	graph.createGraph();
	graph.traversal();
}