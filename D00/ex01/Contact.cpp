#include "Contact.hpp"

Contact::Contact(void) {};
Contact::~Contact(void) {};

std::string Contact::field_name[COUNT] = {
	"First name",
	"Last name",
	"Nickname",
	"Login",
	"Postal address",
	"E-mail address",
	"Phone number",
	"Birthday date",
	"Favorite meal",
	"Underwear color",
	"Darkest secret"
};

void    Contact::set_field(int i, std::string data)
{
    this->fields[i] = data;
}

std::string     Contact::getfield(int index)
{
    return (this->field_name[index]);
}

std::string     Contact::getdata(int index)
{
    return (this->fields[index]);
}

void    Contact::create(void)
{
    for (int i = 0; i < COUNT; i++)
    {
        std::string entry = "";
        while(entry.compare("") == 0)
        {
            std::cout << "Enter the '" << Contact::field_name[i] << "' %>";
            std::cin >> entry;
            if(entry.size() == 0)
                std::cout << "Entry could not be empty !" << std::endl;
        }

        this->set_field(i, entry);
    }
}

