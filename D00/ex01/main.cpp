// including database
#include "Database.hpp"

int     main(void)
{
    Database db;
    std::string command;

    while(command.compare("EXIT") != 0)
    {
        std::cout << "Enter command $> " << std::endl;
        std::cin >> command;

        if(!(command.compare("EXIT") == 0))
        {
            if (command.compare("ADD") == 0)
            {
                if(db::get_size() >= 8)
                {
                    std::cout << "Cannot add db is full" << std::endl;
                }
                else
                {
                    Contact c;

                    c.create();
                    db.add_contact(c);
                }
                
            }
            else if (command.compare("SHOW") == 0)
            {
                db.list();
                int i;
                std::cout << "Enter index of wanted contact $> ";
                std::cin >> i;
                Contact c1 = db.get_contact(i);
            }
        }
    }
}