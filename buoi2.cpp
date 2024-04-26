#include <iostream>
#include <string>
#include <unordered_set>

std::string findDuplicates(const std::string& s) {
    std::unordered_set<char> seenChars;
    std::string duplicates;

    for (char c : s) {
        if (seenChars.count(c) && duplicates.find(c) == std::string::npos) {
            duplicates += c;
            duplicates += ' ';
        } else {
            seenChars.insert(c);
        }
    }

    return duplicates;
}

int main() {
    std::string s = "findduplicates";
    std::string result = findDuplicates(s);
    std::cout << result << std::endl;

    return 0;
}
