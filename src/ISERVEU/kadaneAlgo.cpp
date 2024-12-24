// This calculates the maximum sum of the contiguous subarray and also prints the subarray

#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(vector<int> &nums)
{
    long sum = 0;
    long long maxi = LONG_MIN;
    int start = 0;
    int end = 0;
    int tempStart = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum > maxi)
        {
            maxi = sum;
            start = tempStart;
            end = i;
        }
        else if (sum < 0)
        {
            sum = 0;
            tempStart = i + 1;
        }
    }

    for (int i = start; i <= end; i++)
    {
        cout << nums[i];
        if (i < end)
            cout << ",";
    }
    cout << endl;
    return maxi;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << kadaneAlgo(nums);
    return 0;
}