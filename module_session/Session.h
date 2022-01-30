#ifndef _SESSION_H_
#define _SESSION_H_

#include <string>
#include <ctime>

class Session
{
  class Language
  {
  private:
    std::string language_name;

  public:
    std::string get_language_name() { return language_name; }
    Language(std::string language_name) : language_name{language_name} {};

    ~Language(){};
  } russian{"Russo"},
      portuguese{"Portugues"},
      indonesian{"Indonesio"},
      english{"Ingles"},
      spanish{"Espanhol"},
      chinese{"Chines"},
      mandarin{"Mandarim"},
      hindi{"Hindi"},
      french{"Frances"},
      arabic{"Arabe"},
      bengali{"Bengali"};

private:
  std::string language;
  std::string date;
  std::string time;

public:
  Language languages[11]{russian, portuguese, indonesian, english, spanish, chinese, mandarin, hindi, french, arabic, bengali};
  void get_languages_names();
  std::string get_date() { return date; }
  std::string get_time() { return time; }
  std::string get_language() { return language; }

  Session(std::string language, std::string date = "", std::string time = "");
  ~Session();
};
#endif