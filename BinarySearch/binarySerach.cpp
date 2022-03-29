
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

    // Iterative Implementation
    int binarySearch(vector<int> arr, int lo, int hi, int key)
    {
        while (lo <= hi)
        {
            int mid = lo + floor((hi - lo + 1) / 2);
            if (arr[mid] == key)
                return mid;
            else if (arr[mid] < key)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        return -1;
    }

    // Recursive Implementation
    int binarySearchRecursive(vector<int> arr, int lo, int hi, int key)
    {
        if (hi >= 1)
        {
            int mid = lo + floor((hi - lo + 1) / 2);
            if (arr[mid] == key)
                return mid;
            if (arr[mid] > key)
                return binarySearchRecursive(arr, lo, mid - 1, key);
            return binarySearchRecursive(arr, mid + 1, hi, key);
        }
        return -1;
    }

    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;
        while (t--){
            int n, key;
            cin >> n >> key;
            vector<int> v(n);
            for (int i = 0; i < n; i++){
                cin >> v[i];
            }
            sort(v.begin(), v.end());
            int idx = binarySearch(v, 0, n-1, key );
            if(idx != -1)
                cout<<"Search success, "<<key<<" found at index "<<idx<<"\n";
            else
                cout<<"Search failed, "<<key<<" not found in array!\n";
            
        }

        return 0;
    }

/*
INPUT
T - test cases
for each test case
N key
a1, a2, a3, .... aN

2
5 7
1 3 5 7 9
6 22
16 11 34 23 12  45

OUTPUT
Search success, 7 found at index 3
Search failed, 22 not found in array!

*/

