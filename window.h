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
		cout << "\t\t\t//////////////请选择你要进行的操作//////////////\n";
		cout << "\t\t\t//////////////////1.增加图书///////////////////\n";
		cout << "\t\t\t//////////////////2.删除图书///////////////////\n";
		cout << "\t\t\t//////////////////3.排序图书///////////////////\n";
		cout << "\t\t\t//////////////////4.搜索图书///////////////////\n";
		cout << "\t\t\t////////////////5.打印图书列表//////////////////\n";
		cout << "\t\t\t//////////////////6.关闭页面////////////////////\n\n\n";
		//提示
		cout << "请输入数字1-6选择";
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
				cout << "\t\t\t///////////////请选择你的搜索方式/////////////\n";
				cout << "\t\t\t////////////////1.根据标题搜索///////////////\n";
				cout << "\t\t\t////////////////2.根据作者搜索///////////////\n";
				cout << "\t\t\t////////////////3.根据书号搜索///////////////\n";
				cout << "\t\t\t//////////////////4.退出搜索/////////////////\n\n\n";

				cout << "请输入数字1-4选择";
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
					cout << "请重新输入选项\n";
				}
			}
		case 5:
			bookA.ShowAllBooks();
			break;
		case 6:
			cout << "已关闭系统";
			return;

		default:
			cout << "请重新输入选项\n";
		}
	}
}
//该如何保证数据输入的合法性？输入其他字符后会不断循环