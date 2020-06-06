#include <iostream>

using namespace std;

template <typename T>
class Stack {
	T* niz;
	int zadnji;
public:
	Stack(int br)
	{
		niz = new T[br];
		int zadnji = -1;
	}
	void push(T element);
	void pop();
	bool isempty();
};

template <typename T>
void Stack<T>::push(T element)
{
	for (int i = zadnji; i >= 0; i--)
	{
		niz[i + 1] = niz[i];
	}
	niz[0] = element;
	zadnji++;
}

template <typename T>
void Stack<T>::pop()
{
	for (int i = 0; i < zadnji; i++)
	{
		niz[i] = niz[i+1];
	}
	zadnji--;
}

template <typename T>
bool Stack<T>::isempty()
{
	if (zadnji < 0)
		return true;
	if (zadnji >= 0 )
		return false;
}
