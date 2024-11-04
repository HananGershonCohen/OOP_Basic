#include <iostream>
#include <string>

using namespace std;

class Men {
private:
	string name;
	int age;
	int height;

public:
	// constructor
	Men(string personeName, int personeAge, int personeHeight) : name(personeName), age(personeAge), height(personeHeight) {}

	void introduce() {
		cout << "Hi , my name is: " << name << ", I am " << age << " years old, and my  is " << height << " cm." << endl;
	}
	void birthday() {
		age++;
	}
	string getName() {
		return name;
	}
	void setName(string newName) {
		name = newName;
	}
	
};



int main()
{
	Men person("hanan", 21, 180);
	person.introduce();
	person.birthday();
	person.introduce();
	cout << person.getName() << endl;
	string newName;
	cout << "enter mew name for student "; 
	cin >> newName;
	person.setName(newName);
	person.introduce();


}
