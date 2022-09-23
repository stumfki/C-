bool isAnagram(std::string test, std::string original) {

  transform(test.begin(), test.end(), test.begin(), ::toupper);
  transform(original.begin(), original.end(), original.begin(), ::toupper);

    std::sort(test.begin(), test.end());
    std::sort(original.begin(), original.end());


    if (test == original) {
      return true;
    }
    else {
      return false;
    }
  
}