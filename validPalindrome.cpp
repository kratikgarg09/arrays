#include <iostream>
using namespace std;

bool isValid(char ch){
    if (( ch >= 'a' && ch <= 'z')||( ch >= 'A' && ch <= 'Z')||( ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

bool checkPalindriome(string str){
    int s = 0;
    int e = str.length()-1;
    while (s<=e)
    {
        if (tolower(str[s])!=tolower(str[e]))
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

bool isPalindrome(string s){
    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (isValid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    //change temp string to lower case

    return checkPalindriome(temp);
}

int main()
{
    string sa;
    sa = "NO@!$!$%@on";
    cout<<isPalindrome(sa);
    return 0;
}