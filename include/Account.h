#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "AccountCard.h"
#include "AccountHolder.h"

class Account
{

private:
    double balance = 0.00;
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
    void setBalance(double const &balance);
};

#endif // ACCOUNT_H