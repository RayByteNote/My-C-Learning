#pragma once
#pragma once
#include<vector>
#include<iostream>
namespace ray
{
    template<class T>
    class less
    {
    public:
        bool operator()(const T& x,const T& y)
        {
            return x<y;
        }
    };
    
    template<class T>
    class greater
    {
    public:
        bool operator()(const T& x,const T& y)
        {
            return x>y;
        }
    };
    template<class T, class Container = std::vector<T>, class Compare = less<T>>
    class priority_queue
    {
    public:
        
        priority_queue() = default;

        template<class Inputiterator>
        priority_queue(Inputiterator first,Inputiterator last)
            :_con(first,last)
        {
            for(int i= (_con.size()-1-1)/2;i>=0;i--)
            {
                adjust_down(i);
            }
        }

        void push(const T& x)
        {
            _con.push_back(x);
            adjust_up(_con.size() - 1);
        }

        void pop()
        {
            std::swap(_con[0], _con[_con.size() - 1]);
            _con.pop_back();
            if (!_con.empty())
                adjust_down(0);
        }

        const T& top() const
        {
            return _con[0];
        }

        bool empty() const
        {
            return _con.empty();
        }

        size_t size() const
        {
            return _con.size();
        }
    protected:
        void adjust_up(size_t child)
        {
            Compare _comp;
            while (child > 0)
            {
                size_t parent = (child - 1) / 2;
                if (_comp(_con[parent],_con[child]))
                {
                    std::swap(_con[parent], _con[child]);
                    child = parent;
                }
                else
                {
                    break;
                }
            }
        }
        void adjust_down(size_t parent)
        {
            Compare _comp;
            size_t child = parent * 2 + 1;
            while (child < _con.size())
            {
                if (child + 1 < _con.size() && _comp(_con[child],_con[child + 1]))
                    child += 1;
                if (_comp(_con[parent], _con[child]))
                {
                    std::swap(_con[parent], _con[child]);
                    parent = child;
                    child = parent * 2 + 1;
                }
                else
                {
                    break;
                }
            }
        }
    private:
        Container _con;
    };
}