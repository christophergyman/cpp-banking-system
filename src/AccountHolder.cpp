#include "AccountHolder.h"

// class constructer
AccountHolder::AccountHolder(std::string firstName, std::string middleName, std::string lastName) : firstName(std::move(firstName)), middleName(std::move(middleName)), lastName(std::move(lastName)) {}

// display current account holder information
void AccountHolder::accountWhoAmI()
{
    std::cout << "firstName: " << this->firstName << " \n";
    std::cout << "middleName: " << this->middleName << " \n";
    std::cout << "lastName: " << this->lastName << " \n";
}

// account setter methods
void AccountHolder::setAccountHolderFirstName(std::string const &paramFirstName) { this->firstName = paramFirstName; }
void AccountHolder::setAccountHolderMiddleName(std::string const &paramMiddleName) { this->middleName = paramMiddleName; }
void AccountHolder::setAccountHolderLastName(std::string const &paramLastName) { this->lastName = paramLastName; }