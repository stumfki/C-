#include <string>
#include <vector>
#include <algorithm>

bool XO(const std::string& str)
{

  int counterx = 0;
  int countero = 0;

  std::string her = str;


  for (int i = 0; i < her.size(); i++) {
    if (her[i] == 'x' || her[i] == 'X') {
      counterx++;
    }
    else if (her[i] == 'o' || her[i] == 'O') {
      countero++;
    }
  }

  if (counterx == countero) {
    return true;
  }
  else if (counterx != countero) {
    return false;
  }
  else {
    return true;
  }





}