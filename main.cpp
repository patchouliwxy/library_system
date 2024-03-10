#include"allheader.h"
#include"BOOK.h"                                
#include"BOOKMANAGER.h"
#include"window.h"

int main() {
	std::fstream file("books.txt", std::ios::in | std::ios::out | std::ios::app);
	BookManager manager("books.txt");
	window();
}