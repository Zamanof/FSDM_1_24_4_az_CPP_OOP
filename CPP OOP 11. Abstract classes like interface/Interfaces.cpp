#include<iostream>

using namespace std;

class Footballer {
public:
	string name;
	string surname;
	int number;
	virtual ~Footballer() = 0;
};
Footballer::~Footballer() {}

class IAttack {
public:
	virtual void Attack() = 0;
};

class IDefence {
public:
	virtual void Defence() = 0;
};

class IMidfilder : public IDefence, public IAttack
{};

class Defender : public Footballer, public IDefence
{
public:
	void Defence() override
	{
		cout << "I can Defend" << endl;
	}
};

class Forward : public Footballer, public IAttack
{
public:
	void Attack() override
	{
		cout << "I can Attacked" << endl;
	}
};

class Midlfilder : public Footballer, public IMidfilder {
public:
	void Attack() override
	{
		cout << "I can Attacked" << endl;
	}
	void Defence() override
	{
		cout << "I can Defend" << endl;
	}
};

void DefenderAnouncment(IDefence& defender) {
	defender.Defence();
}

void ForwardAnouncment(IAttack& forward) {
	forward.Attack();
}

void MidlfilderAnouncment(IMidfilder& midlfilder)
{
	midlfilder.Attack();
	midlfilder.Defence();
}


int main() {
	Forward forward;
	Defender defender;
	Midlfilder midlfilder;
	
	ForwardAnouncment(forward);
	ForwardAnouncment(midlfilder);

	DefenderAnouncment(defender);
	DefenderAnouncment(midlfilder);

	MidlfilderAnouncment(midlfilder);

	Footballer* team[11] = {};
	
	
}