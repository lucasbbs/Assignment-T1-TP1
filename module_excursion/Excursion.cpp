#include <iostream>
#include "Excursion.h"
Excursion::Excursion(
    std::string title,
    std::string note,
    std::string city,
    std::string duration,
    std::string description,
    std::string address) : title{title},
                           note{note},
                           city{city},
                           duration{duration},
                           description{description},
                           address{address}
{
}

Excursion::~Excursion() {}