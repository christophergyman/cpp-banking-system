#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "AccountCard.h"
#include "AccountHolder.h"

class Account
{

private:
    AccountHolder accountHolder;
    AccountCard accountCard;

public:
    // constructor
    Account(AccountHolder accountHolder, AccountCard accountCard);

    // print account information
    void showAccountinformation();

    // setter methods
    void setAccountHolder(AccountHolder const &accountHolder);
    void setAccountCard(AccountCard const &accountCard);
};

#endif // ACCOUNT_H