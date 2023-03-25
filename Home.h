#include "PersonProvider.h"

class Home
{
public:
	static void Show()
	{
		PersonProvider* personProvider = new PersonProvider();
		Person* person_1 = nullptr;
		personProvider->addPerson(person_1);
		person_1 = personProvider->getPersons();
		cout << person_1->getName() << endl;
		cout << person_1->getAge() << endl;
	}
};

