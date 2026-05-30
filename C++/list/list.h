#pragma once

namespace ray
{
	template<class T>
	struct list_node
	{
		T	_data;
		list_node<T>*	_next;
		list_node<T>*	_prev;
		list_node(const T& x = T())
			:_data(x)
			,_next(nullptr)
			,_prev(nullptr)
		{}
	};

	template<class T,class Ref,class Ptr>
	struct __list_iterator 
	{
		typedef list_node<T> Node;
		typedef __list_iterator<T, Ref, Ptr> Self;
		Node* _node;

		__list_iterator(Node* node)
			:_node(node)
		{}

		Ref operator*()
		{
			return _node->_data;
		}

		Ptr operator->()
		{
			return &(operator*());
		}

		Self& operator++()
		{
			_node = _node->_next;
			return *this;
		}
		Self operator++(int)
		{
			Self tmp(*this);
			_node = _node->_next;
			return tmp;
		}
		Self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}
		Self operator--(int)
		{
			Self tmp(*this);
			_node = _node->_prev;
			return tmp;
		}
		bool operator!=(const Self& it) const
		{
			return _node != it._node;
		}
		bool operator==(const Self& it) const
		{
			return _node == it._node;
		}
	};

	template<class T>
	class list
	{
		typedef list_node<T> Node; 
	public:
		typedef __list_iterator<T,T&,T*> iterator;
		typedef __list_iterator<T, const T&,const T*> const_iterator;
		iterator begin()
		{
			return iterator(_head->_next);
		}
		iterator end()
		{
			return iterator(_head);
		}
		const_iterator begin() const
		{
			return const_iterator(_head->_next);
		}
		const_iterator end() const
		{
			return const_iterator(_head);
		}

		void empty_Init()
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
			_size = 0;
		}
		list()
		{
			empty_Init();
		}

		list(const list<T>& lt)
		{
			empty_Init();
			for (const auto& e : lt)
			{
				push_back(e);
			}
		}
		list(std::initializer_list<T> il)
		{
			empty_Init();
			for (const auto& e : il)
			{
				push_back(e);
			}
		}
		void swap(list<T>& lt)
		{
			std::swap(_head, lt._head);
			std::swap(_size, lt._size);
		}
		list<T>& operator=(list<T> lt)
		{
			swap(lt);
			return *this;
		}
		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}
		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				it = erase(it);
			}
		}

		void push_front(const T& x)
		{
			insert(begin(), x);
		}
		void push_back(const T& x)
		{
			insert(end(),x);
		}

		void pop_front()
		{
			erase(begin());
		}
		void pop_back()
		{
			erase(--end());
		}
		iterator insert(iterator pos,const T& val)
		{
			Node* cur = pos._node;
			Node* newnode = new Node(val);
			Node* prev = cur->_prev;

			prev->_next = newnode;
			newnode->_next = cur;
			cur->_prev = newnode;
			newnode->_prev = prev;

			++_size;
			return iterator(newnode);
		}
		iterator erase(iterator pos)
		{
			Node* cur = pos._node;
			Node* prev = cur->_prev;
			Node* next = cur->_next;

			prev->_next = next;
			next->_prev = prev;
			delete cur;
			--_size;
			return iterator(next);
		}

		size_t size() const
		{
			return _size;
		}
	private:
		Node* _head;
		size_t _size = 0;
	};
}