#include <iostream>
#include <vector>
using namespace std;

string join_elements(const vector<string> &sts , string sep = ", "){
    string st;
    for (int i = 0; i < sts.size(); i++)
    {
        if(i == sts.size() - 1){
            st += sts[i];
        }
        else{
            st += sts[i] + sep;
        }
    }
    return st;
}

int main()
{
    vector <string> v = { "Mohamed", "Tarek", "Ahmed" };
    cout << join_elements(v, " ");
    return 0;
}