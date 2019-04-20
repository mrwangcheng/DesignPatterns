#pragma once
template< typename T>
class TemplateSingle 
{
public :
	TemplateSingle() 
	{
		m_instance = static_cast<T*>(this);
	}
	virtual ~TemplateSingle()
	{
		m_instance = 0;
	}
public:
	static TemplateSingle *GetInstance()
	{
		if (m_instance)
		{
			return m_instance;
		}
	}
	void ShowModel()
	{
		cout << "this is Template model" << endl;
	}
protected:
	static T * m_instance;

};

class Single :public TemplateSingle<Single>
{
public :
	Single() {}
	~Single() {}
};

