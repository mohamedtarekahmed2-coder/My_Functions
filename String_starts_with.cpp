#include <iostream>
#include <string>
using namespace std;

bool starts_with(const string& st, const string& prefix, bool sensitive  = true){
    if (st.size() < prefix.size())
        return false;
    
    for (int i = 0; i < prefix.size(); i++)
    {
        if ((sensitive)? st[i] != prefix[i]: 
                        (st[i] != tolower(prefix[i])) 
                        && (st[i] != toupper(prefix[i])))
            return false;
    }
    return true;
}

int main()
{
    cout << boolalpha << starts_with("Mo tarek", "Mo", true);
    cout << '\n';
    cout << boolalpha << starts_with("mo tarek", "Mo", true);
    cout << '\n';
    cout << boolalpha << starts_with("mo tarek", "Mo", false);
    cout << '\n';
    cout << starts_with("Mo tarek", "Mo tarek ahmed", false);
    cout << '\n';
    return 0;
}