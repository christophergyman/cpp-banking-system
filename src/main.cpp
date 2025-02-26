#include <thread>
#include "oop-clases/AccountHolder.h"
#include "oop-clases/AccountCard.h"
#include "oop-clases/Account.h"
#include "socket.h"
#include "http_parser.h"


// function to test sockets on threads
void testThreads()
{
    std::cout << "[main]: starting application...\n";

    std::thread serverThread(startClientSocket);
    serverThread.detach();

    std::thread clientThread(startServerSocket);
    clientThread.join();

    std::cout << "[main]: stopping application...\n";
}


// function to rest if http parser works
void testParse()
{
    std::cout << "[testParse]: starting.... \n";
    std::string request = "POST /index.html HTTP/1.1\r\nHost: example.com\r\n";

    if (std::string method = parseHTTPHeader(request); method != "INVALID_METHOD")
    {
        std::cout << "HTTP method: " << method << " \n";
    } else
    {
        std::cout << "HTTP method: INVALID_METHOD\n";
    }
}

int main()
{
    testParse();
    return 0;
}