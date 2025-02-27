//
// Created by Christopher Man on 27/02/2025.
//

#ifndef ROUTING_ENGINE_H
#define ROUTING_ENGINE_H

#include <iostream>
#include <sstream>

void routeMessage(const char buffer[1024]);

int staticFileRoute(const std::string requestMessage);


#endif //ROUTING_ENGINE_H
