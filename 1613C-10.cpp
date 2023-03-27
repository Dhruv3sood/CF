#include<stdio.h>
#include<limits.h>
 
int bs(int k, int h, int v[], int n)
{
    int ct = k;
    for(int i=1 ; i<n ; i++)
    {
        if(k < v[i] - v[i - 1])
            ct += k;
        else
            ct += v[i] - v[i - 1];
    }
    if (ct >= h)
        return 1;
    return 0;
}
 
void solve()
{
    int n, h;
    scanf("%d %d",&n,&h);
    int v[1000];
    for(int i=0 ; i<n ; i++)
      {
        scanf("%d",&v[i]);
       
      }
      
    
       for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (v[i] > v[j]) 
                {
 
                    int a =  v[i];
                    v[i] = v[j];
                    v[j] = a;
 
                }
 
            }
 
        }
    
    int l = 1, r = h, mid;
    int res = INT_MAX;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (bs(mid, h, v, n) == 1)
        {
            if(res > mid)
                res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    printf("%d\n",res);
}
 
int main()
{
    
 
 
    int tc = 1;
    scanf("%d",&tc);
 
 
 
    while (tc--)
    {
        solve();
    }
 
 
    return 0;
}
