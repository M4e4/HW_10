#include <iostream>

template<typename T>
class unique_ptr
{
public:
	unique_ptr(T* ptr = nullptr) : ptr(ptr) {}
	unique_ptr(const unique_ptr&) = delete;
	~unique_ptr() { delete ptr; }

	T& operator*() { return *ptr; }

	T* release()
	{
		T* temp{ ptr };
		ptr = nullptr;
		return temp;
	}

	unique_ptr& operator=(const unique_ptr&) = delete;

private:
	T* ptr;
};

int main()
{


	return EXIT_SUCCESS;
}