#ifndef _RATING_H_
#define _RATING_H_

#include <string>

class Rating
{
private:
  std::string code;
  int rating;
  std::string description;

public:
  int get_rating() { return rating; }
  std::string get_description() { return description; }

  Rating(int rating = 0, std::string description = "");
  ~Rating();
};
#endif // _RATING_H_