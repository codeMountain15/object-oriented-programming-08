// virtual_f03.cpp
// upcasting = 
// treating a derived entity as
// if it were its base entity
// ...
// the oposite is downcasting

#include <iostream>
using namespace std;

class Speaker {
public:
	virtual void talk() const {
		cout << "speaker!" << endl;
	}
};


// Singer objects are Speaker objects
// as they have the same interface
class Singer : public Speaker {
public:
	// Override interface function:
	void talk() const {
		cout << "singer!" << endl;
	}
};


void microphone(Speaker& input) {
	cout << "On the microphone is the ";
	input.talk();
}


int main() {
	Speaker Vaggos;  // it's ok 
					// because talk() is not
				   // a pure virtual function
				  // hence Speaker is not
				 // an abstract class
	microphone(Vaggos);

	Singer Tzina;
	microphone(Tzina); // Upcasting, Tzina
					  // (=Singer) "is a" Speaker
}
