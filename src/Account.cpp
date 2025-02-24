#include "Account.h"

// constructor
Account::Account(AccountHolder accountHolder, AccountCard accountCard) : accountHolder(std::move(accountHolder)), accountCard(std::move(accountCard)) {}

// setter methods
void Account::setAccountCard(AccountCard const &accountCard) { this->accountCard = accountCard; }
void Account::setAccountHolder(AccountHolder const &accountHolder) { this->accountHolder = accountHolder; }