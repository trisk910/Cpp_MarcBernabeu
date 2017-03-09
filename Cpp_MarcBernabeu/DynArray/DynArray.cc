#include "DynArray.hh"
#include <iostream>

using namespace std;

DynArray::DynArray() :
	m_capacity(DYN_ARRAY_DEFAULT_SIZE),
	m_size(0),
	m_data(new int[m_capacity])
{}

DynArray::DynArray(size_t size, const int& value): 
	m_capacity(size),
	m_size(size),
	m_data(new int[size])
{
	fill(begin(), end(), value);
}

DynArray::DynArray(int *arr, size_t size)
{

}

void DynArray::push(const int &value)
{

}