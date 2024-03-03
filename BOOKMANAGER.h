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
	//���캯��

	void AddBook(Book& book) {
		cout << "�������������\n";
		cin >> book.title;
		cout << "�������������\n";
		cin >> book.author;
		cout << "������������\n";
		cin >> book.isbn;
		cout << "��������Ŀ��\n";
		cin >> book.stock;
		books.push_back(book);
		SaveBook();
		cout << "������\n";
	}
	//���ͼ��

	void RemoveBook(std::string& isbn) {

		cout << "������Ҫɾ��������\n";
		cin >> isbn;
		for (unsigned int i = 0; i < books.size(); i++)
		{
			if (books[i].isbn == isbn) {
				books.erase(books.begin() + i);
				SaveBook();
				cout << "��ɾ��";
			}
		}
	}
	//ɾ��ͼ��,������������������


//	void SortBook() {
//		sort(books.begin(), books.end());
//	}
	//����ͼ��,��������


	void SearchByTitle(std::string& title){
		cout << "��������ı���";
		cin >> title;
		for (unsigned int i = 0; i < books.size(); i++) {
			if (books[i].title == title) {
				books[i].print();
			}
		}
	}
	//���ݱ����������������������ܱ������ݺ󲻴���������


	void SearchByAuthor(std::string& author) {
		cout << "�������������";
		cin >> author;
		for (unsigned int i = 0; i < books.size(); i++) {
			if (books[i].author == author) {
				books[i].print();
			}
		}
	}
	//������������


	void SearchByISBN(std::string& isbn){
		cout << "������������";
		cin >> isbn;
		for (unsigned int i = 0; i < books.size(); i++) {
			if (books[i].isbn == isbn) {
				books[i].print();
			}
		}
	}
	//�����������



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
	//����ͼ�������


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
	//��ͼ��״̬����


	void ShowAllBooks()
	{
		for (int i = 0; i < books.size(); i++)
		{
			books[i].print();
			cout << endl;
		}
	}
	//��ӡ����ͼ��


};