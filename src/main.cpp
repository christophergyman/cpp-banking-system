#include "AccountHolder.h"
#include "AccountCard.h"
#include "Account.h"

int main()
{
    AccountHolder chrisHolder("Christopher", "Ga Yiu", "Man");
    AccountCard chrisCard(78882, 203070, 4, 12);
    Account christopherAccount(chrisHolder, chrisCard);

    christopherAccount.setBalance(400.00);
    christopherAccount.showAccountinformation();

    return 0;
}