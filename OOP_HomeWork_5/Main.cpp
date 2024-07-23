#include<iostream>
#include"String.hpp"

int main() {
	setlocale(LC_ALL, "RU");
	int n;

	String str1 = "Hello World";
	str1.print();

	String str2 = str1;
	str2.print();

	String str3 = String(3, '#');
	str3.print();
	std::cout << "=====================\n";
	std::cout << "Добавим три символа '!' в конец строки - \"Hello World\":\n";
	str1.insert(11, 3, '!');
	str1.print();
	std::cout << "\n=====================\n";	
	String str4 = "BIG ";
	std::cout << "Добавим слово BIG в строку - \"Hello World!!!\":\n";
	str1.insert(6, str4);
	str1.print();
	std::cout << "Добавим три символа '*' вместо \"!!!\" в строке - \"Hello BIG World!!!\":\n";
	str1.replace(15, 3, 3, '*');
	str1.print();
	std::cout << "\n=====================\n";
	std::cout << "Заменим слово BIG на Great в строке - \"Hello BIG World***\":\n";
	String str5 = "Great";
	str1.replace(6, 3, str5);
	str1.print();
	std::cout << "\n=====================\n";
	std::cout << "Найдем позицию слова \"happy\" в строке - \"Hello World! I am happy to live in Russia. What about you, happy?\":\n";
	String str6 = "Hello World! I am happy to live in Russia. What about you, happy?";	
	String str7 = "happy";
	size_t num = str6.find(str7, 10);
	if(num > str6.Size())
		std::cout << "В строке отсутствует слово happy." << std::endl;
	else
		std::cout << "Cлово happy в строке будет начинаться с позиции - " << num << std::endl;
	std::cout << "\n=====================\n";
	
	std::cout << "Найдем позицию слова \"new\" по двум первым буквам (ne) в строке - \"Happy new year!\":\n";
	String str8 = "Happy new year!";
	String str9 = "new";
	num = str8.find(str9, 0, 2);
	if (num > str8.Size())
		std::cout << "В строке отсутствует слово happy." << std::endl;
	else
		std::cout << "Cлово happy в строке будет начинаться с позиции - " << num << std::endl;	
}