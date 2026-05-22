#pragma once
#include <iostream>
#include<string>
#include<algorithm>
#include<assert.h>
using namespace std;

namespace ray
{
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;
		iterator begin();
		const_iterator cbegin() const;
		iterator end();
		const_iterator cend() const;
		string(const char* str = "");
		string(const string& s);
		~string();
		size_t size() const;
		size_t capacity() const;
		const char* c_str() const;
		void reserve(size_t n=0);
		char& operator[](size_t pos);
		const char& operator[](size_t pos) const;
		void push_back(char c);
		void clear();
		void append(const char* str);
		string& operator+=(char c);
		string& operator+=(const char* str);
		string& operator=(const string& s);
		string& operator=(string tmp);
		void swap(string& s);
		void pop_back();
		string& insert(size_t pos, char ch);
		string& insert(size_t pos, const char* str);
		string& erase(size_t pos, size_t len = npos);
		size_t find(char ch, size_t pos = 0)  const;
		size_t find(const char* str, size_t pos = 0)  const;
		string substr(size_t pos = 0, size_t len = npos) const;
		bool operator<(const string& s) const;
		bool operator<=(const string& s) const;
		bool operator>(const string& s) const;
		bool operator>=(const string& s) const;
		bool operator==(const string& s) const;
		bool operator!=(const string& s) const;

	private:
		char*  _str;
		size_t _size;
		size_t _capacity;
		char _buff[16];
	public:
		static const size_t npos;
	};

	ostream& operator<<(ostream& out, const string& s);
	istream& operator>>(istream& in, string& s);
	istream& getline(istream& in, string& s, char delim = '\n');
	void swap(string& x, string& y);
}