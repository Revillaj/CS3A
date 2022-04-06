#include <iostream>
#include <string>

void isPalindrome(std::string phrase);
char* convertToArray(std::string phrase, int size);
bool check(char *arr, int size);


int main()
{
    isPalindrome("level");
}

void isPalindrome(std::string phrase)
{
    int size = phrase.length();
    char* arr = convertToArray(phrase, size);
    if(check(arr, size))
    {
        std::cout << phrase << " is a palindrome" << std::endl;
    }
    else
    {
        std::cout << phrase << " is not a palindrome" << std::endl;
    }
}
char* convertToArray(std::string phrase, int size)
{
    char word[size + 1];
    for(int i(0); i < size ; i++)
    {
        word[i] = phrase[i];
    }
    return word;
}

bool check(char *arr, int size)
{
    for(int i(0); i < size; i++)
    {
        if(*(arr+i) == *(arr+((size - 1) - i)))
        {
            if(i == size - 1)
            {
                return true;
            }
            continue;
        }
        else
        {
            return false;
        }
    }
}

