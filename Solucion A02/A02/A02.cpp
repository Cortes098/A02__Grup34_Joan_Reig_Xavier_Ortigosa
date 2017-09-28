// A02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

template <typename T>
void fExample1(T, int paramInt) {
	//Cuerpor de la funcion
	paramInt = 1;
}

template <class C>
C CExample2(T T1, T T2) {

}

template <typename T>
struct node{
	T info;
	node* next{ this };
};


int main()
{

	node<int> un{ 12 };
    return 0;
}

