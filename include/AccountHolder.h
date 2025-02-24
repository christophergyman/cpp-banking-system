#ifndef ACCOUNTHOLDER_H
#define ACCOUNTHOLDER_H

#include <string>
#include <iostream>

class AccountHolder
{
private:
    std::string firstName;
    std::string middleName;
    std::string lastName;

public:
    // Constructor
    AccountHolder(std::string firstName, std::string middleName, std::string lastName);

    // Display account information
    void accountWhoAmI();

    // Setter methods
    void setAccountHolderFirstName(std::string const &paramFirstName);
    void setAccountHolderMiddleName(std::string const &paramMiddleName);
    void setAccountHolderLastName(std::string const &paramLastName);
};

#endif // ACCOUNTHOLDER_H