// Singleton.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "LazyBonse.hpp"
#include "HungrySingletion.hpp"
#include "SingleTemplate.h"
#include <memory>
template<>
Single *TemplateSingle<Single>::m_instance = NULL;
LaySingleton *LaySingleton::m_instance = NULL;
HungrySingletion *HungrySingletion::m_instance = new HungrySingletion();
int main()
{
     LaySingleton *instance = LaySingleton::GetInstance();
	 instance->ShowModel();
	 HungrySingletion *hinstance = HungrySingletion::GetInstance();
	 hinstance->ShowModel();
	 Single single;
	 if (&single == Single::GetInstance())
	 {	
		 cout << " is equal" << endl;
		 Single::GetInstance()->ShowModel();
	 }
	 delete hinstance;
	 hinstance = NULL;
	 delete instance;
	 instance = NULL;
	 
    return 0;
}

