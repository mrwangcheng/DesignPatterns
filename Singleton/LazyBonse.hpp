#pragma once
#include"stdafx.h"
#include<iostream>
using namespace std;

class LaySingleton 
{
private:
	LaySingleton() {}
public:
	~LaySingleton() {}
private:
	static LaySingleton *m_instance;
public :
	static LaySingleton *GetInstance() 
	{
		if (m_instance == NULL)
		{
			m_instance = new LaySingleton();
		}
		return m_instance;
	}
	void ShowModel()
	{
		cout << "this is Laybonse model" << endl;
	}
};
