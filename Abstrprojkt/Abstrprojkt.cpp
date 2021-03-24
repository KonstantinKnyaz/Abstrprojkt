#include <iostream>
#include <clocale>

using namespace std;

// class Humans {
// private:
// 	int age;
// public:
// 	virtual void talk() = 0;
// };

class IHumans {
public:
	virtual void talk() = 0;
};

void IHumans::talk() {
	cout << "неизвестно" << endl;
}

class People : public IHumans {
public:
	void talk() override {
		IHumans::talk();
		cout << "Привет всем!" << endl;
	}
};

class Ufo : public IHumans {
public:
	void talk() override {
		cout << "Some call" << endl;
	}
};

class Dog : public IHumans {
public:
	void talk() override {
		cout << "Gav gav" << endl;
	}
};

int main() {
	setlocale(LC_CTYPE, "rus");

	People bob;
	bob.talk();
	
	return 0;
}