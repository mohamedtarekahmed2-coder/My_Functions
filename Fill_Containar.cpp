#include<iostream>
#include<vector>
using namespace std;

vector<string> fill_vector(int num, const string &val)
{
    vector<string> result(num);
    for (string &st : result)
        st = val;
    return result;
}
int main()
{
    vector <string> s = fill_vector(5, "mohamed");
    for (string st : s)
    {
        cout << st << " ";
    }
    
    return 0;
}