#include<bits/stdc++.h>
using namespace std;
vector<int> Solution::prevSmaller(vector<int> &arr) {
int n=arr.size();
vector<int>ans(n,-1);
stack<int>st;
st.push(arr[0]);
for(int i=1;i<n;i++)
{
while(!st.empty()&&arr[i]<=st.top())st.pop();
if(!st.empty())ans[i]=st.top();
st.push(arr[i]);
}
return ans;
}