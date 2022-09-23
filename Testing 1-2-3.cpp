#include <string>
#include <vector>

std::vector<std::string> number(const std::vector<std::string>& lines)
{
    int f = 1;
    std::vector<std::string> herc;
    for (auto i : lines) {
        herc.push_back(std::to_string(f) + ":" + " " + i);
        f++;
    }

    return herc;
}