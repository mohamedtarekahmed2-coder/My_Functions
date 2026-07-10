#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool in_array(const vector <int> &nums, int target){
    for (int num : nums)
    {
        if (num == target)
            return true;
    }
    return false;
}

int main()
{
    vector <int> nums = {1, 2, 35, 5, 6, 6};
    cout << boolalpha << in_array(nums, 22);
    return 0;
}