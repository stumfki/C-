std::string likes(const std::vector<std::string>& names)
{
    int count = 0;
   
        if (names.size() == 1) {
            return names[0] + " likes this";

        }
        else if (names.size() == 2) {
            return names[0] + " and " + names[1] + " like this";
        }
        else if (names.size() == 3) {
            return names[0] + ", " + names[1] + " and " + names[2] + " like this";
        }
        else if (names.size() > 3) {
            for (int i = 0; i <= names.size(); i++) {
                count++;
            }
            return names[0] + ", " + names[1] + " and " + std::to_string(count - 3) + " others like this";
        }
        else {
            return "no one likes this";
        }
     

} 