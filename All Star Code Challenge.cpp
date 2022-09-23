unsigned int strCount(std::string word, char letter) {
  int ker = 0;
  for (int i = 0; i < word.size(); i++) {
    if (word[i] == letter) {
      ker++;
      
    }
  }
  return ker;
  


}