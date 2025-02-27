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

    // Start server first and join both threads
    std::thread serverThread(startServerSocket);
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Give server time to start listening
    std::thread clientThread(startClientSocket);

    // Join both threads to wait for completion
    serverThread.join();
    clientThread.join();

    std::cout << "[main]: stopping application...\n";
}

// function to rest if http parser works
void testParse()
{
    std::cout << "[testParse]: starting.... \n";
    const std::string request = "GET /index.html HTTP/1.1\r\nHost: example.com\r\n";

    if (const std::string method = parseHTTPHeader(request); method != "INVALID_METHOD")
    {
        std::cout << "HTTP method: " << method << " \n";
    } else
    {
        std::cout << "HTTP method: INVALID_METHOD\n";
    }
}

int main()
{
    testThreads();
    // testParse();
    return 0;
}