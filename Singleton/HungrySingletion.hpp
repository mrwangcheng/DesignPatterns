#pragma once
class HungrySingletion 
{
public :
	HungrySingletion() {}
	~HungrySingletion() {}
public:
	static HungrySingletion * GetInstance()
	{
		return m_instance;
	}	
	void ShowModel()
	{
		cout << "this is Hungry model" << endl;
	}
private:
	static HungrySingletion *m_instance;
};
