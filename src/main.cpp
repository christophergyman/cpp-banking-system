#include "AccountHolder.h"

int main()
{
    AccountHolder holder("Christopher", "Ga yiu", "Man");
    holder.accountWhoAmI();

    std::cout << "\n";

    holder.setAccountHolderFirstName("Jane");
    holder.setAccountHolderMiddleName("Elizabeth");
    holder.setAccountHolderLastName("Doe");
    holder.accountWhoAmI();

    return 0;
}