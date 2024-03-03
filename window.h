#pragma once
#include"allheader.h"
#include"BOOK.h"
#include"BOOKMANAGER.h"

void window() {

	int input = 0;
	int input_2 = 0;
	cout << "请选择你要进行的操作\n";
	cout << "1.增加图书\n";
	cout << "2.删除图书\n";
	cout << "3.排序图书\n";
	cout << "4.搜索图书\n";
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
		cout << "请选择你的搜索方式";
		cout << "1.根据标题搜索";
		cout << "2.根据作者搜索";
		cout << "3.根据书号搜索";
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
		cout << "无效，请重新输入";
	}
}