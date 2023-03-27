#include <bits/stdc++.h>
// #define ll long long
// #define int long long
#define fo() for(int i=0 ; i<10 ; i++)
#define vii vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define get(arr,n) fo(i,n){ int x; cin>>x; arr.pb(x);}
#define this_sort(arr,n) sort(arr,arr+n)
// #define momos(arr) arr.size()#define rev(v) reverse(v.begin(), v.end())
#define maximum(v) max_element(v.begin(), v
#define minimum(v) min_element(v.begin(), v.end())
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;



class EasyVersion{
    
    public:

    void Count_invalgo(int array1[],int input)
    {
    int wire_intersect = 0;fo();
    for (int i = 0; i < input - 1; i++)
        for (int j = i + 1; j < input; j++)
            if (array1[i] > array1[j])
                wire_intersect++; cout<< wire_intersect;
    }
    };

void solve(){
// cin >> input;
//     pair<int, int>array[input];
//     for (int i = 0; i < input; i++)
//     {
//         cin >> array[i].ff >> array[i].ss;
//     }
//     this_sort(array,input);
//     int array1[input];
//     for (int i = 0; i < input; i++)
//     {
//         array1[i] = array[i].ss;
//     }
fo();   
}
int main()
{
    EasyVersion ev;
    fast;
     int input;
    cin>>input;
    pair<int, int>array[input];
    int i=0;
    while (i<input){
        cin >> array[i].ff >> array[i].ss;
        i++;
    }
    this_sort(array,input);
    
    int array1[input];
    for (int i = 0; i < input; i++)
    {
        array1[i] = array[i].ss;
    }
    // int ans = getInvCount(array1);
    // cout << ans;
    ev.Count_invalgo(array1,input);
    // solve;

    return 0;
}
