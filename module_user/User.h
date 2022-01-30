#ifndef _USER_H_
#define _USER_H_
#include <string>
class User
{
private:
  std::string name;
  std::string email;
  std::string password;

public:
  std::string get_name() { return name; }
  std::string get_email() { return email; }

  // Constructor
  User(std::string name, std::string email, std::string password);

  //Destructor
  ~User();
};

#endif // _USER_H_