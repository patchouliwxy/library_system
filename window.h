#pragma once
#include"allheader.h"
#include"BOOK.h"
#include"BOOKMANAGER.h"

void window() {

	string t;
	string a;
	string i;
	string fn;
	int s=0;

	BookManager bookA(fn);
	Book bookB(t,a,i,s);

	int input = 0;
	int input_2 = 0;
	

	cout << "��ѡ����Ҫ���еĲ���\n";
	cout << "1.����ͼ��\n";
	cout << "2.ɾ��ͼ��\n";
	cout << "3.����ͼ��\n";
	cout << "4.����ͼ��\n";
	//��ʾ

	cin >> input;
	switch (input)
	{
	case 1:
		bookA.AddBook(bookB);
		break;
	case 2:
		bookA.RemoveBook(i);
		break;
	case 3:
//		bookA.SortBook();
		break;  
	case 4:
		cout << "��ѡ�����������ʽ\n";
		cout << "1.���ݱ�������\n";
		cout << "2.������������\n";
		cout << "3.�����������\n";
		cin >> input_2;
		switch (input_2)
		{
		case 1:
			bookA.SearchByTitle(t);
			break;
		case 2:
			bookA.SearchByAuthor(a);
			break;
		case 3:
			bookA.SearchByISBN(i);
			break;
		default:
			cout << "��Ч������������\n";
		}


	default:
		cout << "��Ч������������\n";
	}
}