#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first

using namespace std;



int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	 cin.ignore(); //must be there when using getline(cin, s)
	while(T--)
	{
    string a; cin>>a;
		
		int i,j,k,mirror,m=a.size();
	    string s="$";
	    for(i=0;i<m;i++){
	        s+='#';
	        s+=a[i];
	    }
	    s+='#'; s+='@';
	    int n=s.size();
	    int c=0,r=0;
	    int p[n]={0}; int maxi=0;
	    for(i=1;i<n-1;i++){
	        int mir =2*c-i;

	        if(i<r) p[i]=min(p[mir],r-i);
	        while(s[i+1+p[i]]==s[i-(1+p[i])])
	        p[i]++;
	        if(p[i]>maxi && (i+1+p[i])==n-1) maxi=p[i];

	        for(auto x:p) cout<<x<<" "; cout<<"\n";
	        if(i+p[i]>r){
	            c=i;
	            r=i+p[i];

	        }
	    }
	    std::cout << maxi << '\n';

}
}
