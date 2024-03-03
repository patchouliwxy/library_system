#pragma once
#include"allheader.h"
#include"BOOK.h"
class BookManager {
private:
	vector<Book>books;
public:

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
	}
	//���ͼ��

	void RemoveBook(std::string& isbn) {

		cout << "������Ҫɾ��������\n";
		cin >> isbn;
		for (int i = 0; i < books.size(); i++)
		{
			if (books[i].isbn == isbn) {
				books.erase(books.begin() + i);
				cout << "��ɾ��";
			}
		}
	}
	//ɾ��ͼ��,������������������

	void SortBook() {
		sort(books.begin(), books.end());
	}
	//����ͼ��

	void SearchByTitle(std::string& title){
		cout << "��������ı���";
		cin >> title;
		for (int i = 0; i < books.size(); i++) {
			if (books[i].title == title) {
				books[i].print();
			}
		}
	}
	//���ݱ����������������������ܱ������ݺ󲻴���������

	void SearchByAuthor(std::string& author) {
		cout << "�������������";
		cin >> author;
		for (int i = 0; i < books.size(); i++) {
			if (books[i].author == author) {
				books[i].print();
			}
		}
	}
	//������������

	void SearchByISBN(std::string& isbn){
		cout << "������������";
		cin >> isbn;
		for (int i = 0; i < books.size(); i++) {
			if (books[i].isbn == isbn) {
				books[i].print();
			}
		}
	}
	//�����������
};