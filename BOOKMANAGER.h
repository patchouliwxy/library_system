#pragma once
#include"allheader.h"
#include"BOOK.h"
class BookManager {
private:
	vector<Book>books;
public:

	void AddBook(Book& book) {
		cout << "请输入书的名称\n";
		cin >> book.title;
		cout << "请输入书的作者\n";
		cin >> book.author;
		cout << "请输入书的书号\n";
		cin >> book.isbn;
		cout << "请输入书的库存\n";
		cin >> book.stock;

		books.push_back(book);
	}
	//添加图书

	void RemoveBook(std::string& isbn) {

		cout << "请输入要删除书的书号\n";
		cin >> isbn;
		for (int i = 0; i < books.size(); i++)
		{
			if (books[i].isbn == isbn) {
				books.erase(books.begin() + i);
				cout << "已删除";
			}
		}
	}
	//删除图书,待处理：不存在书的情况

	void SortBook() {
		sort(books.begin(), books.end());
	}
	//排序图书

	void SearchByTitle(std::string& title){
		cout << "请输入书的标题";
		cin >> title;
		for (int i = 0; i < books.size(); i++) {
			if (books[i].title == title) {
				books[i].print();
			}
		}
	}
	//根据标题搜索，待处理：搜索功能遍历数据后不存在书的情况

	void SearchByAuthor(std::string& author) {
		cout << "请输入书的作者";
		cin >> author;
		for (int i = 0; i < books.size(); i++) {
			if (books[i].author == author) {
				books[i].print();
			}
		}
	}
	//根据作者搜索

	void SearchByISBN(std::string& isbn){
		cout << "请输入书的书号";
		cin >> isbn;
		for (int i = 0; i < books.size(); i++) {
			if (books[i].isbn == isbn) {
				books[i].print();
			}
		}
	}
	//根据书号搜索
};