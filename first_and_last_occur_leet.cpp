class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        int start = 0, end = nums.size() - 1, first = -1, last = -1;
        vector<int> ans(2);

        while (start <= end)
        {

            int mid = start + (end - start) / 2;
            // for left side

            if (nums[mid] == target)
            {
                first = mid;
                // left side aao;
                end = mid - 1;
            }

            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        start = 0, end = nums.size() - 1;
        while (start <= end)
        {
            // for right side

            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
            {
                last = mid;
                // right side aao;
                start = mid + 1;
            }

            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        ans[0] = first;
        ans[1] = last;
        return ans;
    }
};


vector<int>ans;

//initiating the left side of array
for (int i=0;i<n;i++){
    if (logic.push_back(vector <int>__ATOMIC_CONSUME))
}