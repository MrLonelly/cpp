#include "Database.hpp"
#include <iomanip>

Database::Database(void)
{
    contacts = 0;
}

Database::~Database(void) {};

void    Database::add_contact(Contact c)
{
    this->c[contacts] = c;
    this->contacts++;
}

void    Database::display(std::string field)
{
    if (field.size() > 10)
		std::cout << std::setw(10) << std::setfill('.') << field.substr(0, 10);
	else
		std::cout << std::setw(10) << std::right << std::setfill(' ') << field;

    std::cout << '|';
}

void    Database::show(int i)
{
    Contact c = this->c[i];
    for(int i = 0; i < COUNT; i++)
        display(c.getfield(i));
    std::cout << std::endl;

    std::cout << std::setw(122) << std::setfill('-') << '-';
	std::cout << std::endl;

    for(int i = 0; i < COUNT; i++)
        display(c.getdata(i));
    std::cout << std::endl;
}

void    Database::list(void)
{
    display("Index");
	display("First name");
	display("Last name");
	display("Nickname");
    std::cout << std::endl;

    std::cout << std::setw(44) << std::setfill('-') << '-';
	std::cout << std::endl;

	for (int i = 0; i < this->contacts; i++)
	{
		Contact c = this->c[i];

	    display(std::to_string(i));
	    display(c.getdata(0));
	    display(c.getdata(1));
	    display(c.getdata(2));
		std::cout << std::endl;
	}
    std::cout << std::endl;
}

int     Database::get_size()
{
    return (this->contacts);
}