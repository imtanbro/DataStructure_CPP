#include <iostream>
using namespace std;

int main()
{
    string s = "Tanmay";
    char a;
    // for(int i =(s.length()); i>=0; i--){
    //     cout<<s[i];
    // }
    // cout<<endl;
    for (int i = 0; i < (s.length()) / 2; i++)
    {
        a = s[i];
        s[i] = s[(s.length() - i - 1)];
        s[(s.length() - i - 1)] = a;
    }
    cout << s << endl;
}
