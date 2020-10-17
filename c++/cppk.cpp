#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
scanf("%d %d",&m,&n);
//printf(“Input matrix:\n”);
vector< vector > v(m, vector (n,0));
set myset;
vector< set > row(m, myset);
vector< set > col(n, myset);
for(int i =0;i<m;i++)
{
for(int j =0;j<n;j++)
{
scanf("%d",&v[i][j]);
row[i].insert(v[i][j]);
col[j].insert(v[i][j]);
}
}

for(int i =0;i<m;i++)
{
for(int j = 0;j<n;j++)
{
v[i][j] = 1 + max( distance(row[i].begin(), row[i].find(v[i][j])), distance(col[j].begin(), col[j].find(v[i][j])) );
}
}
//printf(“Resultant matrix:\n”);
for(int i =0;i<m;i++)
{
for(int j = 0;j<n;j++)
{
cout<<v[i][j]<<" “;
}
cout<<”\n";
}
return 0;
}
