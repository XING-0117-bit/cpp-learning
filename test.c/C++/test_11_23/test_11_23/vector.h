#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
#include<string.h>
#include<iostream>
using namespace std;
namespace mystd
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		vector()
			:_start(nullptr),
			_finish(nullptr),    //初始化为空
			_end_of_shorage(nullptr)
		{

		}
		/*vector(size_t n, const T& val)
		{
			reserve(n);
			for (size_t i = 0; i < n; i++)
			{
				*_finish = val;
				_finish++;
			}
		}*/
		template <class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);
				first++;
			}
		}
		vector(initializer_list<T> il)
		{
			reserve(il.size());
			for (auto& e : il)
			{
				push_back(e);
			}
		}
		void swap(vector<T>&v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_end_of_shorage, v._end_of_shorage);
		}
		vector(const vector<T>& v)   //深拷贝
		{
			vector tmp(v._start,v. _finish);
			swap(tmp);
		}
		vector<T>& operator==(const vector<T> v) //赋值
		{
			vector tmp(v);
			swap(tmp);
			return *this;
		}
		void push_back(const T& val);
		iterator begin()const
		{
			return _start;
		}
		size_t size()
		{
			return _finish - _start;
		}
		size_t capacity()const
		{
			return _end_of_shorage - _start;
		}
		iterator end()const
		{
			return _finish;
		}
		void pop_back();
		bool empty()
		{
			return _finish == _start;
		}
		T& operator[](size_t i)
		{
			return _start[i];
		}
		void insert(iterator pos, const T& val);
		iterator erase(iterator pos);
		void resize(size_t n, const T& val=T());  //用匿名对象
		void reserve(size_t n);
		
	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_shorage;
	};
	
	template<class T>
	void vector<T>::reserve(size_t n)
	{
		if (n > capacity())
		{
			size_t old_size = size();
			T* tmp = new T[n];
			if (_start)
			{
				memcpy(tmp, _start, old_size * sizeof(T));
				delete[]_start;
			}
			_start = tmp;
			_finish = tmp + old_size;
			_end_of_shorage = tmp + n;
		}
	}
	template<class T>
	void vector<T>::push_back(const T& val)
	{
		if (_end_of_shorage == _finish)  
		{
			size_t old_size = size();
			size_t Newcapacity = capacity() == 0 ? 4 : capacity() * 2;//扩容
			T* tmp = new T[Newcapacity];
			for (size_t i = 0; i < size(); i++)  //代替memcpy
			{
				tmp[i] = _start[i];
			}
			delete[]_start;      //删除旧空间
			_start = tmp;
			_finish = tmp + old_size;
			_end_of_shorage = tmp + Newcapacity;
		}
		*_finish = val;    
		_finish++;      //有效字数增加
	}
	template<class T>
	void vector<T>::pop_back()
	{
		assert(!empty());  //判断是否为空，如果为空就不能再删
		_finish--;
	}
	template<class T>
	void vector<T>::insert(iterator pos, const T& val)
	{
		assert(pos >= _start);
		assert(pos <= _finish);
		if (_end_of_shorage == _finish)
		{
			size_t old_capacity = pos-_start;
			size_t old_size = size();
			size_t Newcapacity = capacity() == 0 ? 4 : capacity() * 2;  //扩容
			T* tmp = new T[Newcapacity];
			memcpy(tmp, _start, sizeof(T) * old_size);
			delete[]_start;
			_start = tmp;
			_finish = tmp + old_size;
			_end_of_shorage = tmp + Newcapacity;
			pos = tmp + old_capacity;   //扩容之后重置pos
		}
		size_t len = _finish - pos;
		iterator it = pos+len;
		while (it!=pos)   //将从pos位置开始的所有值往后挪动
		{
			*(it) = *(it-1);
			it--;
		}
		*pos = val;
		_finish++;
	}
	template<class T>
	typename vector<T>::iterator vector<T>::erase(iterator pos)
	{
		assert(pos >= _start);
		assert(pos < _finish);
		iterator it = pos;
		while (pos + 1 < _finish)
		{
			*pos = *(pos + 1);//现在这种情况下pos确实是不失效的
			pos++;
		}
		_finish--;
		return it;
	}
	template<class T>
	void vector<T>::resize(size_t n, const T& val)
	{
		while (size() < n)
		{
			push_back(val);
		}
		while (size() > n)
		{
			_finish--;
		}
	}
	
	
}