std::string disemvowel(const std::string& str) {

    std::string her;

    
    for (int i = 0; i < str.size(); i++) {

        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            her.push_back(str[i]);

        }


    }
    return her;
}