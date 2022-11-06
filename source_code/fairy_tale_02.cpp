// fairy_tale_02.cpp
// = fairy_tale_01.cpp
// with virtual functions

#include <iostream>
using namespace std;

class Animal {
protected:
	string type;
	int location;
public:
	Animal(string t, int l) : type(t), location(l) {};
	virtual void talk(string){};  // <--------------- new
	void move(int a) { location += a; cout << "Moved from the base class\n"; };
	int get_location() const { return location; };
};

class Wolf;

// class Human
class Human : public Animal {
protected:
	int age;
	string name;

public:
	Human(int a, string n, int l) : age(a), name(n), Animal("human", l) {};
	void talk(string msg) { cout << "From the derived class: " << msg << endl; };
	string get_name() const { return name; };
	void calm_down(Wolf*);
	
};

// class Wolf
class Wolf : public Animal {
	bool friendly;
public:
	Wolf(int l) : Animal("wolf", l) { friendly = false; };
	void talk(string msg) { cout << "From the derived class: " << msg << endl; };
	
	friend void Human::calm_down(Wolf*);
};

void Human::calm_down(Wolf* a) { a->friendly = true; };

void move(Animal& input, int pace) { input.move(pace); } // <--------------- new

int main() {
	
	Animal* generic;	// <--------------- new
	Human mother(40, "Mother", 0), lrrh(20, "Little Red Riding Hood", 0), grandmother(60, "Roula", 20);
	Wolf wolf(10);

	cout << "Once upon a time...\n";
	system("pause"); // wait for user's response
	
	system("cls"); // clear the screen
	cout << "There was a girl whose name was Little-Red-Riding-Hood\n";
	system("pause"); // wait for user's response

	system("cls"); // clear the screen
	cout << "One morning, this conversation took place:\n";
	system("pause"); // wait for user's response

	system("cls"); // clear the screen
	//speak(&mother, &lrrh, "take this basket and go to your grandmother");
	generic = &mother;	generic->talk("take this basket and go to your grandmother");		// <--------------- new
	system("pause"); // wait for user's response

	system("cls"); // clear the screen
	//speak(&lrrh, &mother, "I'll go!");
	generic = &lrrh;	generic->talk("I'll go!");		// <--------------- new
	system("pause"); // wait for user's response
	
	while (lrrh.get_location() < wolf.get_location()) { move(lrrh, 1); } // lrrh is an Animal   // <--------------- new
	system("pause"); // wait for user's response

	system("cls"); // clear the screen
	cout << "bla bla bla bla\n";
	system("pause"); // wait for user's response

	// bla bla bla bla

	Human programmer(18, "The Programmer", 20); // The Programmer enters the story
	programmer.calm_down(&wolf); // after their conversation, wolf changes his mind
	while (wolf.get_location() < 100) { move(wolf, 3); } // and wolf (is an Animal) sets to Sounio  // <--------------- new
	system("pause"); // wait for user's response

	// bla bla bla bla

	system("cls"); // clear the screen
	cout << "The End!\n";

	return 0;
}
