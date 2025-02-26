#include "oop-clases/AccountHolder.h"
#include "oop-clases/AccountCard.h"
#include "oop-clases/Account.h"
#include "socket.h"
#include <thread>

int main()
{

    std::cout << "[main]: starting application...\n";

    std::thread serverThread(startClientSocket);
    serverThread.detach();

    std::thread clientThread(startServerSocket);
    clientThread.join();

    std::cout << "[main]: stopping application...\n";

    return 0;
}