#include <iostream>
#include <string>

bool IsKPeriodic(const std::string &str, std::size_t k)
{
    if((k <= 0) || (k > str.length()))
    {
        std::cout << "Неправильно заданна длина подстроки ";
        return false;
    }
    std::string exs = str.substr(0, k);
    for(std::size_t i = k; i < str.length(); i += k)
    {
        std::string temp = str.substr(i, k);
        if(exs != temp)
            return false;
    }
    return true;
}

int main()
{
    std::string str1 = "abcabcabcabc";
    std::string str2 = "abcdabcdabcd";

    std::cout << std::boolalpha;

    for(std::size_t i = 0; i <= str1.length() + 1; ++i)
        std::cout << str1 << ' ' << i << ' ' << IsKPeriodic(str1, i) << std::endl;

    for(std::size_t i = 0; i <= str2.length() + 1; ++i)
        std::cout << str2 << ' ' << i << ' ' << IsKPeriodic(str2, i) << std::endl;
    
    return 0;
}