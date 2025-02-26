//
// Created by Christopher Man on 26/02/2025.
//

#include "http_parser.h"
#include <iostream>
#include <unordered_set>
#include <sstream>

std::string parseHTTPHeader(const std::string& httpRequest)
{
    // convert httpRequest string to stream, pull first word into method
    std::istringstream stream(httpRequest);
    std::string method;
    stream >> method;

    static const std::unordered_set<std::string> validMethods = {
        "GET", "POST", "PUT", "DELETE", "PATCH", "OPTIONS", "HEAD", "CONNECT", "TRACE"
    };

    // check if method is in validMethods
    if (validMethods.contains(method))
    {
        return method;
    }
    else
    {
        return "INVALID_METHOD";
    }
}
