#include <iostream>
#include <algorithm>
#include <vector>

bool isPalindrome(const std::string & text) {
    auto iterators = std::mismatch(text.begin(), text.end(), text.rbegin());
    if (iterators.first != text.end()) {
        return false;
    }
    return true;

}


int main() {
    std::vector<std::string> tests {"Ala ma kota", "ala", "kajak", "neveroddoreven", "abacada"};
    for (auto & elem : tests) {
        if (isPalindrome(elem)) {
            std::cout << elem << " jest palindromem \n";
        }
        else {
            std::cout << elem << " nie jest palindromem \n";
        }
    }

}