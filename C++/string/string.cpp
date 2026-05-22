#define _CRT_SECURE_NO_WARNINGS 1
#include"string.h"
using namespace std;

namespace ray
{
	const size_t string::npos = -1;

	string::string(const char* str)
		:_size(strlen(str))
	{
		_capacity = _size;
		_str = new char[_size + 1];
		memcpy(_str, str, _size + 1);
	}

	/*string::string(const string& s)
	{
		_str = new char[s._capacity + 1];
		memcpy(_str, s._str, s._size + 1);
		_size = s._size;
		_capacity = s._capacity;
	}*/
	string::string(const string& s)
	{
		string tmp(s._str);
		swap(tmp);
	}

	string::~string()
	{
		delete[] _str;
		_str = nullptr;
		_size = _capacity = 0;
	}

	const char* string::c_str() const
	{
		return _str;
	}
	size_t string::size() const
	{
		return _size;
	}
	size_t string::capacity() const
	{
		return _capacity;
	}

	string::iterator string::begin()
	{
		return _str;
	}
	string::const_iterator string::cbegin() const
	{
		return _str;
	}

	string::iterator string::end()
	{
		return _str + _size;
	}
	string::const_iterator string::cend() const
	{
		return _str + _size;
	}

	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];
			memcpy(tmp, _str, _size + 1);
			delete[]_str;
			_str = tmp;
			_capacity = n;
			cout << "capacity:" << _capacity << endl;
		}
	}

	char& string::operator[](size_t pos)
	{
		assert(pos < _size);
		return _str[pos];
	}
	const char& string::operator[](size_t pos) const
	{
		assert(pos < _size);
		return _str[pos];
	}

	void string::push_back(char c)
	{
		if (_size >= _capacity)
		{
			size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
			reserve(newcapacity);
		}
		_str[_size] = c;
		++_size;
		_str[_size] = '\0';
	}

	void string::append(const char* str)
	{
		size_t len = strlen(str);
		if (len + _size > _capacity)
		{
			size_t newcapacity = 2 * _capacity > len + _size ? 2 * _capacity : len + _size;
			reserve(newcapacity);
		}
		memcpy(_str + _size, str, len + 1);
		_size += len;
	}

	void string::clear()
	{
		_str[0] = '\0';
		_size = 0;
	}

	string& string::operator+=(char c)
	{
		push_back(c);
		return *this;
	}
	string& string::operator+=(const char* str)
	{
		append(str);
		return *this;
	}

	void string::pop_back()
	{
		assert(_size > 0);
		--_size;
		_str[_size] = '\0';
	}

	string& string::insert(size_t pos, char ch)
	{
		assert(pos <= _size);
		if (_size >= _capacity)
		{
			size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
			reserve(newcapacity);
		}
		size_t end = _size + 1;
		while (end > pos)
		{
			_str[end] = _str[end - 1];
			--end;
		}
		_str[pos] = ch;
		++_size;
		_str[_size] = '\0';
		return *this;
	}
	string& string::insert(size_t pos, const char* str)
	{
		assert(pos <= _size);
		size_t len = strlen(str);
		if (len + _size >= _capacity)
		{
			size_t newcapacity = 2 * _capacity > len + _size ? 2 * _capacity : len + _size;
			reserve(newcapacity);
		}
		size_t end = _size + len;
		while (end > pos + len - 1)
		{
			_str[end] = _str[end - len];
			--end;
		}
		for (size_t i = 0; i < len; i++)
		{
			_str[pos + i] = str[i];
		}
		_size += len;
		return *this;
	}

	string& string::erase(size_t pos, size_t len)
	{
		assert(pos < _size);
		if (len == npos || len >= (_size - pos))
		{
			_size = pos;
			_str[_size] = '\0';
		}
		else
		{
			size_t i = pos + len;
			memmove(_str + pos, _str + i, _size + 1 - i);
			_size -= len;
		}
		return *this;
	}

	size_t string::find(char ch, size_t pos)  const
	{
		for (size_t i = pos; i < _size; i++)
		{
			if (_str[i] == ch)
			{
				return i;
			}
		}
		return npos;
	}
	size_t string::find(const char* str, size_t pos)  const
	{
		const char* p = strstr(_str + pos, str);
		if (p == nullptr)
		{
			return npos;
		}
		else
		{
			return p - _str;
		}
	}

	string string::substr(size_t pos, size_t len) const
	{
		if (len == npos || len >= _size - pos)
		{
			len = _size - pos;
		}
		string ret;
		ret.reserve(len);
		for (size_t i = 0; i < len; i++)
		{
			ret += _str[pos + i];
		}
		return ret;
	}

	bool string::operator<(const string& s) const
	{
		size_t i1 = 0, i2 = 0;
		while (i1 < _size && i2 < s._size)
		{
			if (_str[i1] < s[i2])
			{
				return true;
			}
			else if (_str[i1] > s[i2])
			{
				return false;
			}
			else
			{
				++i1;
				++i2;
			}
		}
		return i2 < s._size;
	}
	bool string::operator<=(const string& s) const
	{
		return *this < s || *this == s;
	}
	bool string::operator>(const string& s) const
	{
		return !(*this <= s);
	}
	bool string::operator>=(const string& s) const
	{
		return !(*this < s);
	}
	bool string::operator==(const string& s) const
	{
		size_t i1 = 0, i2 = 0;
		while (i1 < _size && i2 < s._size)
		{
			if (_str[i1] != s[i2])
			{
				return false;
			}
			else
			{
				++i1;
				++i2;
			}
		}
		return i1 == _size && i2 == s._size;
	}
	bool string::operator!=(const string& s) const
	{
		return !(*this == s);
	}

	//传统写法
	/*string& string::operator=(const string& s)
	{
		if (this != &s)
		{
			char* tmp = new char[s._capacity + 1];
			memcpy(tmp, s._str, s._size + 1);
			delete[] _str;
			_str = tmp;
			_size = s._size;
			_capacity = s._capacity;
		}
		return *this;
	}*/
	//现代写法
	string& string::operator=(const string& s)
	{
		if (this != &s)
		{
			string tmp(s);
			swap(tmp);
		}
		return *this;
	}
	string& string::operator=(string tmp)
	{
		swap(tmp);
		return *this;
	}
	void string::swap(string& s)
	{
		std::swap(_str, s._str);
		std::swap(_size, s._size);
		std::swap(_capacity, s._capacity);
	}

	ostream& operator<<(ostream& out, const string& s)
	{
		//有效防止无法打印字符串中有效\0后的字符
		//out << s.c_str;
		for (size_t i = 0; i < s.size(); i++)
		{
			out << s[i];
		}
		return out;
	}
	istream& operator>>(istream& in, string& s)
	{
		s.clear();

		char buff[128];
		int i = 0;
		char ch = in.get();
		while (ch != '\n' && ch != ' ')
		{
			buff[i++] = ch;
			if (i == 127)
			{
				buff[i] = '\0';
				s += buff;
				i = 0;
			}
			ch = in.get();
		}
		if (i > 0)
		{
			buff[i] = '\0';
			s += buff;
		}
		return in;
	}

	istream& getline(istream& in, string& s, char delim )
	{
		s.clear();

		char buff[128];
		int i = 0;
		char ch = in.get();
		while (ch != delim)
		{
			buff[i++] = ch;
			if (i == 127)
			{
				buff[i] = '\0';
				s += buff;
				i = 0;
			}
			ch = in.get();
		}
		if (i > 0)
		{
			buff[i] = '\0';
			s += buff;
		}
		return in;
	}

	void swap(string& x, string& y)
	{
		x.swap(y);
	}

}