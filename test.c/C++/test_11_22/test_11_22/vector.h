#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
#include<string.h>
namespace mystd
{
	template <class T>
	class vector
	{
		public:
			typedef T* iterator;
			typedef const T* const_iterator;
			vector()
				:_start(nullptr),
				_finish(nullptr),
				_end_of_shorage(nullptr)
			{

			}
			void push_back(const T& val);
			size_t capacity()const
			{
				return _end_of_shorage - _start;
			}
			size_t size()const
			{
				return _finish - _start;
			}
			iterator begin()
			{
				return _start;
			}
			iterator end()
			{
				return _finish;
			}
			void reserve(size_t n)
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
			void insert(iterator position,  const T& val);
			void pop_back();
			bool empty()
			{
				return _finish == _start;
			}
			void erase(iterator pos);
		private:
			iterator _start;
			iterator _finish;
			iterator _end_of_shorage;
		};
	template<class T>
	void vector<T>::push_back(const T& val)
	{
		if(_finish==_end_of_shorage)
		{
			size_t old_size = size();
			size_t Newcapacity = capacity() == 0 ? 4 : capacity() * 2;
			reserve(Newcapacity);
		}
		*_finish = val;
		_finish++;
	}
	template<class T>
	void vector<T>::insert(iterator pos,  const T& val)
	{
		size_t len = size();
		assert(pos >= _start);
		assert(pos <= _finish);
		if (_finish == _end_of_shorage)
		{
			size_t Newcapacity = capacity() == 0 ? 4 : capacity() * 2;
			reserve(Newcapacity);
			 pos = _start + len;
		}
			memmove(pos + 1, pos, sizeof(T) * (_finish - pos));
			*pos = val;
			_finish++;
	}
	template<class T>
	void vector<T>::pop_back()
	{
		assert(!empty());
		_finish--;
	}
	template<class T>
	void vector<T>::erase(iterator pos)
	{
		assert(pos >= _start);
		assert(pos <= _finish);
		iterator it = pos +1;
		while (it< _finish)
		{
			*(it-1) = *it;
			it++;
			
			
		}
		_finish--;
	}
	
	
}