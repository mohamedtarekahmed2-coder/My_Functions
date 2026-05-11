#include <iostream>
#include <vector>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int get_operation_result(vector<int> nums, char operation = '+')
{
    int result = nums.front();
    for (int i = 1; i < nums.size(); i++)
    {
        switch (operation)
        {
        case '+': result += nums.at(i); break;
        case '-': result -= nums.at(i); break;
        case '*': result *= nums.at(i); break;
        }
    }
    return result;
}


int main(){
    fast_io();
    vector<int> nums = {2, 5, 6, 0, 1, 9, -222};
    cout << get_operation_result(nums, '-') << ' ';

    return 0;
}
 