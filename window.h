#pragma once
#include"allheader.h"
#include"BOOK.h"
#include"BOOKMANAGER.h"

void window() {

	int input = 0;
	int input_2 = 0;
	cout << "��ѡ����Ҫ���еĲ���\n";
	cout << "1.����ͼ��\n";
	cout << "2.ɾ��ͼ��\n";
	cout << "3.����ͼ��\n";
	cout << "4.����ͼ��\n";
	cin >> input;
	switch (input)
	{
	case 1:
		AddBook();
		break;
/**	case 2:
		RemoveBook();
		break;
	case 3:
		SortBook();
		break;  **/
	case 4:
		cout << "��ѡ�����������ʽ";
		cout << "1.���ݱ�������";
		cout << "2.������������";
		cout << "3.�����������";
		cin >> input_2;
/**		switch (input_2)
		{
		case 1:
			SearchByTitle();
		case 2:
			SearchByAuthor();
		case 3:
			SearchByISBN();
		default:
			break;
		}
**/

	default:
		cout << "��Ч������������";
	}
}