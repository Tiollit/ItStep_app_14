#include "Person.h"

void Person::setName(string name)
{
	if (name.empty())
		this->name = "NULL";
	else
		this->name = name;
}
string Person::getName() const
{
	return name;
}
void Person::setAge(int age)
{
	if (age >= 18 && age <= 120)
	{
		this->age = (uint16_t)age;
	}
	else
	{
		this->age = 0;
	}
}
uint16_t Person::getAge() const
{
	return age;
}
//Constructor & Destructor
Person::Person()
{
	setName("");
	setAge(0);
}
Person::Person(string name) : Person()
{
	cout << "[" << (long long)this << "] : " << "Person(string name)" << endl;
	setName(name);
}
Person::Person(int age) : Person()
{
	setAge(age);
}
Person::Person(string name, int age) : Person(name)
{
	cout << "[" << (long long)this << "] : " << "Person(string name, int age)" << endl;
	setAge(age);
}
Person::Person(const Person& person)
{
	cout << "[" << (long long)this << "] : " << "Person(const Person &person)[copy constructor]" << endl;
	setName(person.name);
	setAge(person.age);
}
Person::~Person()
{
	cout << "[" << (long long)this << "] : " << "~Person(): Delete object!" << endl;
	this->name.clear();
	setAge(0);
}