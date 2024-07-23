#pragma once
#include<iostream>

class String {
private:
	char* data;
	size_t size;
public:
	String();
	String(const char* str);
	String(size_t repeats, char sym);
	String(const String& other);	// lvalue-reference
	String(String&& other);		// rvalue-reference (перевод - правосторонняя ссылка) Конструктор перемещения
	~String();
	void print()const;
	size_t Size()const { return size; }

	String& operator=(const char* str);
	String& operator=(const String& other);
	String& operator=(String&& other);		// перемещающий оператор присваивания
	String& operator+(const char* str)const;
	String& operator+(const String& other)const;

	// Домашнее задание #5: 
	// Добавить методы insert, replace, find в свой класс String.
	// 1. Метод insert:
	String& insert(size_t index, size_t count, char sym);
	String& insert(size_t index, const String& str);
	// 2. Метод replace:
	String& replace(size_t pos, size_t count, size_t count2, char sym);
	String& replace(size_t pos, size_t count, const String& str);
	// 3. Метод find:
	size_t find(const String& str, size_t pos = 0)const;
	size_t find(const String& str, size_t pos, size_t count)const;
};
