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
    void setAccountCardNumber(int cardNumber);
    void setAccountCardSortCode(int sortCode);
    void setAccountCardExpiryMonth(int expiryMonth);
    void setAccountCardExpiryYear(int expiryYear);
};

#endif // ACCOUNTCARD_H