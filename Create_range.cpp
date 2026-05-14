#include<iostream>
#include<vector>
using namespace std;

vector<int> create_range(int start, int end)
{
    vector<int> result(end - start + 1);
    for(int &num : result){
        num = start;
        start++;
    }
    return result;
}

int main()
{
    vector <int> nums = create_range(5, 10);
    for (int st : nums)
    {
        cout << st << " ";
    }
    
    return 0;
}