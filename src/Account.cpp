#include "Account.h"

// constructor
Account::Account(AccountHolder accountHolder, AccountCard accountCard) : accountHolder(std::move(accountHolder)), accountCard(std::move(accountCard)) {}

// print account information
void Account::showAccountinformation()
{
    this->accountHolder.accountWhoAmI();
    this->accountCard.cardInfo();
}

// setter methods
void Account::setAccountCard(AccountCard const &accountCard) { this->accountCard = accountCard; }
void Account::setAccountHolder(AccountHolder const &accountHolder) { this->accountHolder = accountHolder; }