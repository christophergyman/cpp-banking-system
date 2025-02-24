#ifndef ACCOUNTCARD_H
#define ACCOUNTCARD_H

#include <iostream>

class AccountCard
{
private:
    int cardNumber;
    int sortCode;
    int expiryMonth;
    int expiryYear;

public:
    // constructor
    AccountCard(int cardNumber, int sortCode, int expiryMonth, int expiryYear);

    // display current card information
    void cardInfo();

    // setter methods
    void setAccountCardNumber(int const &cardNumber);
    void setAccountCardSortCode(int const &sortCode);
    void setAccountCardExpiryMonth(int const &expiryMonth);
    void setAccountCardExpiryYear(int const &expiryYear);
};

#endif // ACCOUNTCARD_H