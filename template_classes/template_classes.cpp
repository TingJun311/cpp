#include <iostream>
#include <stdio.h>

using namespace std;


template <class T>
class Arithmetic
{
	private:
		T a;
		T b;
	
	public:
		Arithmetic(T a, T b);
		Arithmetic();
		void	init(T a, T b);
		T	add();
		T	sub();
		T	multi();
		T	div();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
	this->a = a;
	this->b = b;
};

template<class T>
Arithmetic<T>::Arithmetic()
{};

template<class T>
void	Arithmetic<T>::init(T a, T b)
{
	this->a = a;
	this->b = b;
};

template<class T>
T	Arithmetic<T>::add()
{
	return (this->a + this->b);
};

template<class T>
T	Arithmetic<T>::sub()
{
	return (this->a - this->b);
};

template<class T>
T	Arithmetic<T>::multi()
{
	return (this->a * this->b);
}

template<class T>
T	Arithmetic<T>::div()
{
	return (this->a / this->b);
}

int	main(void)
{
	Arithmetic<int> a;
	Arithmetic<char> b;
	
	a.init(2, 2);
	b.init('z', 'b');
	printf("This is a template generic class in cpp.\n");
	printf("int: %d \n", a.add());
	printf("char: %c \n", b.sub());

	return (0);
}
