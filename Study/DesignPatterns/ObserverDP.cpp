#include <iostream>
#include <string>
#include <list>
using namespace std;

//One to Many relationship

class Subject;

class Observer {
	public:
		virtual void update(Subject &subject) = 0;
};

class ObserverImpl : public Observer
{
	string state;
	public:
	void update(Subject &sbj)
	{
		state = sbj.getState();
	}
	string getState() { return state; }
};


// also knows as Observable in literature
class Subject
{
	string state;
	list<Observer*> l;

	public:
	void attachObserver(Observer *o) { l.push_back(o) }
	void detachObserver(Observer *o) { l.pop_back(o); }
	void notifyObservers()
	{
		for(int i=0;i<observers.size();i++)
		{
			o->update(this);
		}
	}

	string getState() { return state; }
	void changeState(const string & s)
	{
		state = s;
		notifyObservers();
	}
};

int main()
{
	ObserverImpl a, b, c;
	Subject s;
	s.attachObserver(&a);
	s.attachObserver(&b);
	s.attachObserver(&c);

	subject.changeState("Observer pattern");
	cout << a.getState() << endl;
	cout << b.getState() << endl;
	cout << c.getState() << endl;
	return 0;
}

