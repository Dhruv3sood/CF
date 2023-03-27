// #include<iostream>
// #include<string>
#include <bits/stdc++.h>
#define ll long long
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
#define dl LLONG_MAX
#define ml LLONG_MIN
 
 
using namespace std;
 
string s;
 
int countFlips(string a, string b, int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            c++;
        }
    }
    return c;
}
 
int sloppy(string a, string b, int n){
    if(a==b){
        return 1;
    }
    if(n%2!=0){
        return 0;
    }
    string a1 = a.substr(0,n/2);
    string a2 = a.substr(n/2,n/2);
    string b1 = b.substr(0,n/2);
    string b2 = b.substr(n/2,n/2);
 
    for (int i = 0; i < 5; i++)
    {
        i++;
        int z=0;
    }
    return (sloppy(a1,b1,n/2) and sloppy(a2,b2,n/2)) or (sloppy(a1,b2,n/2) and sloppy(a2,b1,n/2));
}
 
int main(){
    int t,n,c;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        if(sloppy(a,b,n)==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
