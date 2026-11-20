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
			_finish(nullptr),
			_end_of_storage(nullptr)
		{

		}
		 size_t capacity()const
		{
			return _end_of_storage-_start;
		}
		 iterator begin()
		 {
			 return _start;
		 }
		 iterator end()
		 {
			 return _finish;
		 }
		 size_t size()
		 {
			 return _finish-_start;
		 }
		void push_back(const T& x);
	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;


	};
	template<class T>
	void vector<T>::push_back(const T& x)
	{
		if (_end_of_storage == _finish)
		{
			size_t old_size = size();
			size_t newcapacity = (capacity() == 0) ? 4 : capacity() * 2;
			T* tmp = new T[newcapacity];
			memcpy(tmp, _start, old_size * sizeof(T));
			delete[]_start;

			_start = tmp;
			_end_of_storage = tmp + newcapacity;
			_finish = tmp + old_size;
		}
			*_finish = x;
			_finish++;
		
	}
}
