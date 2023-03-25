#include "PersonProvider.h"

void PersonProvider::setPersons(Person* persons)
{
	this->persons = persons;
}

Person* PersonProvider::getPersons() {
	return persons;
}

bool PersonProvider::createPerson()
{
	return true;
}
bool PersonProvider::removePerson()
{
	return true;
}
bool PersonProvider::addPerson(Person* new_person = nullptr)
{
	if (new_person == nullptr)
	{
		cout << "Enter name: ";
		string name;
		getline(cin, name);
		cout << "Enter Age: ";
		int age;
		cin >> age;
		new_person = new Person(name, age);
	}
	persons = new_person;
	return true;
}
bool PersonProvider::editPerson()
{
	return true;
}

PersonProvider::PersonProvider()
{
	size = 1;
	persons = new Person[size];
}
PersonProvider::PersonProvider(uint64_t size)
{
	persons = new Person[size];
}
PersonProvider::~PersonProvider()
{
	delete[] persons;
	persons = nullptr;
}