//
// Created by Christopher Man on 27/02/2025.
//

#include "routing_engine.h"

void routeMessage(const std::string& httpRequest)
{
    // convert httpRequest string to stream, pull first word into method
    std::istringstream stream(httpRequest);
    std::string method;
    stream >> method;


}


int staticFileRoute(const std::string requestMessage)
{

}
