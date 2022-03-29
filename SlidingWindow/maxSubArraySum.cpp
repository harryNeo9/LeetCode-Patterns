
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define ld long double
    #define p 1000000007
    #define inf 1e18
    #define endl "\n"
    #define pb emplace_back
    #define vi vector<int>
    #define vll vector<ll>
    #define vs vector<string>
    #define pii pair<int, int>
    #define pll pair<ll, ll>
    #define ump unordered_map
    #define mp map
    #define pq_max priority_queue<ll>
    #define pq_min priority_queue<ll, vll, greater<ll>>
    #define ff first
    #define ss second
    #define mid(l, r) (l + (r - l) / 2)
    #define loop(i, a, b) for (int i = (a); i <= (b); i++)
    #define looprev(i, a, b) for (int i = (a); i >= (b); i--)

    int maxSubArraySum(vector<int> nums, int k)
    {
        int n = nums.size();
        int maxSum = INT_MIN;
        for (int i = 0; i < n - k; i++)
        {
            int subarrysum = 0;
            for (int j = i; j < i + k; j++)
            {
                subarrysum += nums[j];
            }
            maxSum = max(subarrysum, maxSum);
        }
        return maxSum;
    }

    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t; cin>>t;
        int n, k;
        while(t--){
            cin>>n>>k;
            vector<int> nums(n);
            for(int i=0; i<n; i++){
                cin>>nums[i];
            }
            cout<<maxSubArraySum(nums, k)<<"\n";
        }


        return 0;
    }

    /*
    2
    5
    1 3 5 7 9
    6
    16 11 34 23 12  45
    */

