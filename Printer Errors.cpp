class Printer
{
public:
    static std::string printerError(const std::string& s) {
  int errors = 0;
  int sucess = 0;
  int length = 0;

  for (int i = 0; i < s.size(); i++)  {
    if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm') {
      sucess++;
    }
    else {
      errors++;
    }
  }
  for (int k = 0; k < s.size(); k++) {
    length++;
  }
  std::string str = std::to_string(errors);
  std::string ttr = std::to_string(length);

  return str + "/" + ttr;
}
};