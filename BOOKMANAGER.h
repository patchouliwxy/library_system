#pragma once
#include"allheader.h"
#include"BOOK.h"
class BookManager {
private:
	vector<Book>books;
	string filename;
public:

	BookManager(string filename) {
		LoadBook();
	}
	//构造函数

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
		SaveBook();
		cout << "添加完成\n";
	}
	//添加图书

	void RemoveBook(std::string& isbn) {

		cout << "请输入要删除书的书号\n";
		cin >> isbn;
		for (unsigned int i = 0; i < books.size(); i++)
		{
			if (books[i].isbn == isbn) {
				books.erase(books.begin() + i);
				SaveBook();
				cout << "已删除\n";
			}
			else
				cout << "该图书不存在\n";
		}
	}
	//删除图书


	void SortBook()
	{
		sort(books.begin(), books.end(), [](Book a, Book b) {
			return a.isbn < b.isbn;
			});
		cout << "" << endl;
	}
	//排序图书,存在问题


	void SearchByTitle(std::string& title){
		cout << "请输入书的标题";
		cin >> title;
		for (unsigned int i = 0; i < books.size(); i++) {
			if (books[i].title == title) {
				books[i].print();
			}
			else if(i == books.size()-1)
				cout << "未找到该图书信息！" << endl;
		}

	}
	//根据标题搜索


	void SearchByAuthor(std::string& author) {
		cout << "请输入书的作者";
		cin >> author;
		for (unsigned int i = 0; i < books.size(); i++) {
			if (books[i].author == author) {
				books[i].print();
			}
			else if (i == books.size() - 1)
				cout << "未找到该图书信息！" << endl;
		}

	}
	//根据作者搜索


	void SearchByISBN(std::string& isbn){
		cout << "请输入书的书号";
		cin >> isbn;
		for (unsigned int i = 0; i < books.size(); i++) {
			if (books[i].isbn == isbn) {
				books[i].print();
			}
			else if (i == books.size() - 1)
				cout << "未找到该图书信息！" << endl;
		}
		
	}
	//根据书号搜索



	void LoadBook()
	{
		ifstream file(filename);
		if (file.is_open())
		{
			string line;
			while (getline(file, line))
			{	
				string title = line.substr(0, line.find(","));
				line = line.substr(line.find(",") + 1);

				string author = line.substr(0, line.find(","));
				line = line.substr(line.find(",") + 1);

				string isbn = line.substr(0, line.find(","));
				line = line.substr(line.find(",") + 1);

				int stock = stod(line);
				Book book(title,author, isbn,stock);
				books.push_back(book);
			}
			file.close();
		}
	}
	//处理图书的数据


	void SaveBook()
	{
		ofstream file(filename);
		if (file.is_open())
		{
			for (int i = 0; i < books.size(); i++)
			{
				file << books[i].ToString() << endl;
			}
			file.close();
		}
	}
	//将图书状态保存


	void ShowAllBooks()
	{
		for (int i = 0; i < books.size(); i++)
		{
			books[i].print();
			cout << endl;
		}
	}
	//打印所有图书


}; 