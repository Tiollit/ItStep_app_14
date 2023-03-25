#include "library.h"

class Person
{
private:
	string name;
	uint16_t age;
public:
	//setter
	void setName(string name);
	void setAge(int age);
	//getter
	string getName() const;
	uint16_t getAge() const;

	//Constructors
	Person(); //default
	Person(string name);
	Person(int age);
	Person(string name, int age);
	explicit Person(const Person& person);
	//Destructor
	~Person();
};
