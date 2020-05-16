#include <iostream>

bool isPalindrome(const std::string text)
{
    int length=text.length();
    bool score=true;
    for (int i=0; i<length; i++)
    {
        if (text[i]!=text[length-1-i]) score=false;
    }
    return score;
}
int main()
{
    std::cout<<isPalindrome(samochod);
}
