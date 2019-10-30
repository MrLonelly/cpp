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

void    set_field(int i, std::string data)
{
    this->fields[i] = data;
}

void    Contact::create(void)
{
    std::string entry = "";

    for (int i = 0; i < COUNT; i++)
    {
        while(entry.compare("") == 0)
        {
            std::cout << "Enter the '" << Contact::field_name[i] << "' %>";
            std::cin >> entry;
            std::cout << "Entry could not be empty !" << std::endl;
        }

        this->set_field(i, entry);
    }
}

