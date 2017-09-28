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
public:
	std::vector<T1> aV;
	T2 atributo;
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
	node * first, *last;
	int mida;
public:
	void push(C1 valor1){
		if (last == first && first == nullptr)
		{
			node* buffer = new node{ valor1,nullptr, nullptr };
			last = buffer;
			first = last;
			mida++;
		}
		else
		{
			node* buffer = new node{ valor1, nullptr, last };
			last->next = buffer;
			last = buffer;
			mida++;
		}
	};
	void pop(){
		if (mida == 0) {
			last = nullptr;
			first = nullptr;
			last = first;
			mida--;
		}

		else {
			first = first->next;
			first->previous = nullptr;
			mida--;

	}
	}
	int size()
	{
		return mida;
	}
	SuperQueue(const SuperQueue &param)
		: first{ param.first },
		last{ param.last },
		mida{ param.mida }
	{
	}
	SuperQueue() 
		: first{ nullptr },
		last{ nullptr },
		mida{ 0 }
	{

	}
	~SuperQueue() {

	}
};



int main()
{
//1
	//A
	fExample1(2);
	//B
	CExample2<int, int> Nombre;
	//C
	node<int> un{};

//2
	swapValues(12.0, 12.3);
	swapValues(120, 123);

//3
	SuperQueue<int> nom;
	nom.push(5);
	nom.push(6);
	nom.push(7);
	nom.pop();
	int mida = nom.size();
	SuperQueue<int> dos(nom);

	return 0;
}



