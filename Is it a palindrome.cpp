bool isPalindrom(const std::string& str)
{
   
    std::string word = str;
    std::transform(word.begin(), word.end(), word.begin(), ::toupper);
    std::string her = word;


    std::reverse(her.begin(), her.end());
    if (word == her) {
        return true;
    }
    else {
        return false;
    }
    
}