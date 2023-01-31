#include<iostream> 

using namespace std; 

// char getMaxChar(string s){

//     char ch;

//     for (int i = 0; i < s.length(); i++)
//     {
//         for (int j = 0; j < s.length(); j++)
//         {
//             if (s[i] == s[j])
//             {
//                 ch = s[i];
//             }
            
//         }
        
//     }
//     return ch;
// }

char getMaxChar(string s){
    int arr[26] = {0};
    int number;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch >= 'a' && ch<='z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        
        arr[number]++;
    }

    int maxi = -1 , ans;
    for (int i = 0; i < 26; i++)
    {
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main(){ 
    string s;
    cin>>s;
    cout << getMaxChar(s);
    return 0;
}