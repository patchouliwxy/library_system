#pragma once
#include"allheader.h"

//类：书
class Book {
private:
	//书类中包含的各项属性
	std::string title;
	std::string author;
	std::string isbn;
	int stock;
public:

	friend class BookManager;

	Book(const std::string&t,const std::string&a,const std::string&i,int s):
		title(t),author(a),isbn(i),stock(s){}//构造函数

//成员函数
	void print() {
		cout << "Title:" << title << ",Author:" << author << ",ISBN:" << isbn << ",Stock:" << stock << endl;
	}
};
