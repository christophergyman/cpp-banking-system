#include "Account.h"

// constructor
Account::Account(AccountHolder accountHolder, AccountCard accountCard) : accountHolder(std::move(accountHolder)), accountCard(std::move(accountCard)) {}

// print account information
void Account::showAccountinformation()
{
    this->accountHolder.accountWhoAmI();
    std::cout << "\n";
    this->accountCard.cardInfo();
    std::cout << "\n";
    std::cout << "balance: " << this->balance << " \n";
    std::cout << "\n";
}

// setter methods
void Account::setAccountCard(AccountCard const &accountCard) { this->accountCard = accountCard; }
void Account::setAccountHolder(AccountHolder const &accountHolder) { this->accountHolder = accountHolder; }
void Account::setBalance(double const &balance) { this->balance = balance; }