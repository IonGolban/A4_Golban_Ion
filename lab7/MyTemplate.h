#include <iostream>
#pragma once
template <class T>
class MyTemplate
{
	T* vector;
	int count;
public :
	MyTemplate();
	void push(T value);
	T pop();
	void remove(int index);
	void printMyVector();
	void insertElementAtIndex(int index, T element);
	const T& get(int index);
	int getCount();
	//void set(T element, int index);
};

template<class T>
void MyTemplate<T>::remove(int index) {
	if (index < this->count) {
		for (int i = index; i <= count; i++) {
			this->vector[i] = this->vector[i + 1];
		}
	}
	this->count--;
}

template<class T>
inline void MyTemplate<T>::printMyVector()
{
	for (int i = 0; i < this->count;i++) {
		std::cout << this->vector[i] << "\n";
	}
}



template<class T>
inline void MyTemplate<T>::insertElementAtIndex(int index, T element)
{
	if (index < this->count) {
		for (int i = this->count; i > index; i--) {
			this->vector[i] = this->vector[i - 1];
		}
		this->vector[index] = element;
		this->count++;
	}
}

template<class T>
inline const T& MyTemplate<T>::get(int index)
{

	return this->vector[index];
}

template<class T>
inline int MyTemplate<T>::getCount()
{
	return this->count ;
}

template<class T>
MyTemplate<T>::MyTemplate()
{
	vector = new T[100];
	count = 0;
}


template<class T>
void MyTemplate<T>::push(T value)
{
	this->vector[count++] = value;
	
}

template<class T>
T MyTemplate<T>::pop()
{
	if (count != 0) {
		return this->vector[--count];
	}
	
	int a = -1;
	return a;
}
