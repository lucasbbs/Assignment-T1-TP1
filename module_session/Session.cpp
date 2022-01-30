#include <ctime>
#include <iostream>
#include "Session.h"

Session::Session(std::string language, std::string date, std::string time) : language{language}, date{date}, time{time}
{

  if (date == "")
  {
    time_t now = ::time(NULL);
    tm *ltm = localtime(&now);
    this->date = std::to_string(ltm->tm_year + 1900) + "-" + std::to_string(ltm->tm_mon + 1) + "-" + std::to_string(ltm->tm_mday) + "";
  }
  if (time == "")
  {
    time_t now = ::time(0);
    tm *ltm = localtime(&now);
    this->time = std::to_string(ltm->tm_hour) + ":" + std::to_string(ltm->tm_min + 1) + ":" + std::to_string(ltm->tm_sec) + "";
  }

  std::cout << this->date + " " + this->time << std::endl;
}

Session::~Session() {}

void Session::get_languages_names()
{
  // int arrSize = sizeof(languages) / sizeof(languages[0]);

  int arrSize = *(&languages + 1) - languages;
  std::cout << arrSize << std::endl;

  for (size_t i = 0; i < arrSize; i++)
  {
    std::cout << languages[i].get_language_name() << std::endl;
  }
}