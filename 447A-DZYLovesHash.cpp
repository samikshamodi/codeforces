/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

#define endl '\n'
#define pb push_back
#define mp make_pair
#define f first
#define s second

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.first == b.first)
        return a.second < b.second;

    else
        return a.first < b.first;

}

int main()
{
    sync;
    int p, n;
    cin >> p >> n;

    int arr[p];

    for(int i = 0; i < p; i += 1)
        arr[i] = -2;

    int x;
    for(int i = 0; i < n; i += 1)
    {
        cin >> x;
        int pos = x % p;

        if(arr[pos] != -2)
        {
            cout << i+1;
            return 0;
        }
        else
        	arr[pos]=x;

    }
    cout << -1;
    return 0;
}