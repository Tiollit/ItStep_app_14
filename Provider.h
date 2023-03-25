#include "Person.h"

class PersonProvider
{
private:
	Person* persons = nullptr;
	uint64_t size;
public:
	void setPersons(Person* persons);
	Person* getPersons();

	bool createPerson();
	bool removePerson();
	bool addPerson(Person* new_person);
	bool editPerson();

	PersonProvider();
	PersonProvider(uint64_t size);
	~PersonProvider();
};
