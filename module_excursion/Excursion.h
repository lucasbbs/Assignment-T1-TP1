#ifndef _EXCURSION_H_
#define _EXCURSION_H_

#include <string>
#include <ctime>

class Excursion
{
private:
  std::string code;
  std::string title;
  std::string note;
  std::string city;
  std::string duration;
  std::string description;
  std::string address;

public:
  std::string get_title() { return title; }
  std::string get_note() { return note; }
  std::string get_city() { return city; }
  std::string get_duration() { return duration; }
  std::string get_description() { return description; }
  std::string get_address() { return address; }

  Excursion(
      std::string title = "",
      std::string note = "",
      std::string city = "",
      std::string duration = "",
      std::string description = "",
      std::string address = "");

  ~Excursion();
};

#endif // _EXCURSION_H_