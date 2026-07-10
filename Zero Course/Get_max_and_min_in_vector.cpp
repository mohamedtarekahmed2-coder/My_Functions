#include <iostream>
#include <vector>
using namespace std;
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int get_max(vector<int> nums)
{
    int max_num = nums.front();
    for (int i = 1; i < static_cast<int>(nums.size()); i++)
        if (nums.at(i) > max_num)
            max_num = nums.at(i);
    return max_num;
}

int get_min(vector<int> nums)
{
    int min_num = nums.front();
    for (int i = 1; i < static_cast<int>(nums.size()); i++)
        if (nums.at(i) < min_num)
            min_num = nums.at(i);
    return min_num;
}

int main(){
    fast_io();
    vector<int> nums = {2, 5, 6, 7, 1, 9, -222};
    cout << get_max(nums) << ' ';
    cout << get_min(nums) << ' ';

    return 0;
}
 