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
	Men student("hanan", 21, 180);
	student.introduce();
	student.birthday();
	student.introduce();
	cout << student.getName() << endl;
	string newName;
	cout << "enter mew name for student "; 
	cin >> newName;
	student.setName(newName);
	student.introduce();


}
