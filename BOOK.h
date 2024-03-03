#pragma once
#include"allheader.h"

//�ࣺ��
class Book {
private:
	//�����а����ĸ�������
	std::string title;
	std::string author;
	std::string isbn;
	int stock;
public:

	friend class BookManager;

	Book(const std::string&t,const std::string&a,const std::string&i,int s):
		title(t),author(a),isbn(i),stock(s){}//���캯��

//��Ա����
	void print() {
		cout << "Title:" << title << ",Author:" << author << ",ISBN:" << isbn << ",Stock:" << stock << endl;
	}
};
