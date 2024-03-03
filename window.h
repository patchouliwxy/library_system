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
	

	cout << "请选择你要进行的操作\n";
	cout << "1.增加图书\n";
	cout << "2.删除图书\n";
	cout << "3.排序图书\n";
	cout << "4.搜索图书\n";
	//提示

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
		cout << "请选择你的搜索方式\n";
		cout << "1.根据标题搜索\n";
		cout << "2.根据作者搜索\n";
		cout << "3.根据书号搜索\n";
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
			cout << "无效，请重新输入\n";
		}


	default:
		cout << "无效，请重新输入\n";
	}
}