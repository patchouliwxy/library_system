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
	
	labelA:while (1 == 1) {
		cout << "\t\t\t//////////////��ѡ����Ҫ���еĲ���//////////////\n";
		cout << "\t\t\t//////////////////1.����ͼ��///////////////////\n";
		cout << "\t\t\t//////////////////2.ɾ��ͼ��///////////////////\n";
		cout << "\t\t\t//////////////////3.����ͼ��///////////////////\n";
		cout << "\t\t\t//////////////////4.����ͼ��///////////////////\n";
		cout << "\t\t\t////////////////5.��ӡͼ���б�//////////////////\n";
		cout << "\t\t\t//////////////////6.�ر�ҳ��////////////////////\n\n\n";
		//��ʾ
		cout << "����������1-6ѡ��";
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
			bookA.SortBook();
			break;
		case 4:
			while (1 == 1) {
				cout << "\t\t\t///////////////��ѡ�����������ʽ/////////////\n";
				cout << "\t\t\t////////////////1.���ݱ�������///////////////\n";
				cout << "\t\t\t////////////////2.������������///////////////\n";
				cout << "\t\t\t////////////////3.�����������///////////////\n";
				cout << "\t\t\t//////////////////4.�˳�����/////////////////\n\n\n";

				cout << "����������1-4ѡ��";
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
				case 4:
					goto labelA;
				default:
					cout << "����������ѡ��\n";
				}
			}
		case 5:
			bookA.ShowAllBooks();
			break;
		case 6:
			cout << "�ѹر�ϵͳ";
			return;

		default:
			cout << "����������ѡ��\n";
		}
	}
}
//����α�֤��������ĺϷ��ԣ����������ַ���᲻��ѭ��