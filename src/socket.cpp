//
// Created by Christopher Man on 26/02/2025.
//
#include <iostream>
#include "socket.h"
#include <sys/socket.h>
#include <cstring>
#include <netinet/in.h>
#include <unistd.h>
#include "http_parser.h"

int startServerSocket()
{
    std::cout << "[server]: server function started... \n" ;

    // create socket
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    // specify local address
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    //binding the socket
    bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));

    // listen to assigned socket
    std::cout << "[server]: server listening to socket... \n" ;
    listen(serverSocket, 5);

    // accept any connection request
    int clientSocket = accept(serverSocket, (struct sockaddr*)NULL, NULL);

    // receive the data
    char buffer[1024] = { 0 };
    recv(clientSocket, buffer, sizeof(buffer), 0);
    std::cout << "[server]: Message from the client: " << buffer << " \n";

    // const std::string method = parseHTTPHeader(buffer);
    // std::cout << "[server]: Method: " << method << " \n";

    // send a return message back to the client
    const char* returnMessage = "RETURN: message received from you... \n";
    send(clientSocket, returnMessage, strlen(returnMessage), 0);
    std::cout << "[server]: received message sent out \n";

    return serverSocket;
};
int startClientSocket() {
    std::cout << "[client]: client function started... \n";

    // create client side socket
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);

    // specify server address
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // sending connection request
    std::cout << "[client]: sending connection request... \n";
    connect(clientSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));

    //sending data
    const char* message = "GET /index.html HTTP/1.1\r\nHost: example.com\r\n";
    send(clientSocket, message, strlen(message), 0);
    std::cout << "[client]: client sending data... \n";

    // Receive response from server
    std::cout << "[client]: waiting for server response... \n";
    char buffer[1024] = { 0 };
    recv(clientSocket, buffer, sizeof(buffer), 0);
    std::cout << "[client]: Message received from the server: [" << buffer << "] \n";

    return clientSocket;
}

void closeSocket(const int &socket)
{
    close(socket);
}
