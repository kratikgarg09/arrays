#include<iostream> 
using namespace std; 

char toLowerCase(char a){
    if(a >='a' && a<='z'){
        return a;
    }
    else{
        char temp = a+'a'-'A';
        return temp;
    }

}

bool checkPalindriome(char a[],int n){
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        if (toLowerCase(a[s])!=toLowerCase(a[e]))
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

void reverse(char name[],int len){
    int start = 0;
    int end = len-1;
    
    while (start<end)
    {
        swap(name[start],name[end]);
        start++;
        end--;
    }
    
}

int getLen(char ch[]){
    int count = 0;
    for (int i = 0; ch[i] !='\0'; i++)
    {
        count++;
    }
    return count;

}

int main(){ 
    
    char name[20];
    
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    cout<<"length:"<<getLen(name);
    
    cout<<"reversing the string......."<<endl;
    reverse(name,getLen(name));
    cout<<name<<endl;

    cout <<"the string is Pallindrome :" << checkPalindriome(name,getLen(name)) << endl;
    return 0;
}