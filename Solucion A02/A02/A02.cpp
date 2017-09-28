// A02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

//1
template <typename T, int paramInt = 1>
T fExample1(T argumento) {

	//FUNCION
	return argumento * paramInt;

}

template <class T1, class T2>
class CExample2
{
private:
	std::vector<T1> aV;
public:
	T2 atributo;
	CExample2();
	~CExample2();
};

template <typename N>
struct node {
	N info;
	node* next;
};

//2
template <typename V1>
void swapValues(V1 a, V1 b) {
	V1 temp;
	temp = a;
	a = b;
	b = temp;
}

//3
template<class C1>
class SuperQueue
{
private:
	struct node
	{
		C1 info;
		node *previous, *next;
	};
public:
	push(C1 valor1);
	pop(C1 valor2);
	C1 size();
	SuperQueue();
	~SuperQueue();
};



int main()
{
//1
	//A
	fExample1(2);
	//B
	CExample2<int, int> Nombre;
	//C
	node<int> un;

//2
	swapValues(12.0, 12.3);
	swapValues(120, 123);

//3



	return 0;
}

template<class T1, class T2>
CExample2<T1, T2>::CExample2()
{
}

template<class T1, class T2>
CExample2<T1, T2>::~CExample2()
{
}
