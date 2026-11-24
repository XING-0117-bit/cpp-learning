#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
#include<string.h>
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
		void resize(size_t n, const T& val);
	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_shorage;
	};
	template<class T>
	void vector<T>::push_back(const T& val)
	{
		if (_end_of_shorage == _finish)  
		{
			size_t old_size = size();
			size_t Newcapacity = capacity() == 0 ? 4 : capacity() * 2;//扩容
			T* tmp = new T[Newcapacity];
			memcpy(tmp, _start, sizeof(T) * size()); //将旧空间拷贝到新空间中
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