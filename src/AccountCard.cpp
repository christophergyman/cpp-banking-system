#include "AccountCard.h"

// class constructer
AccountCard::AccountCard(int cardNumber, int sortCode, int expiryMonth, int expiryYear) : cardNumber(std::move(cardNumber)),
                                                                                          sortCode(std::move(sortCode)),
                                                                                          expiryMonth(std::move(expiryMonth)),
                                                                                          expiryYear(std::move(expiryYear)) {}

// display current card information
void AccountCard::cardInfo()
{
    std::cout << "cardNumber:" << this->cardNumber << " \n";
    std::cout << "sortCode:" << this->sortCode << " \n";
    std::cout << "expiryMonth:" << this->expiryMonth << " \n";
    std::cout << "expiryYear:" << this->expiryYear << " \n";
}

// setter methods
void AccountCard::setAccountCardNumber(int cardNumber) { this->cardNumber = cardNumber; }

void AccountCard::setAccountCardSortCode(int sortCode) { this->sortCode = sortCode; }

void AccountCard::setAccountCardExpiryMonth(int expiryMonth) { this->expiryMonth = expiryMonth; }

void AccountCard::setAccountCardExpiryYear(int expiryYear) { this->expiryYear = expiryYear; }