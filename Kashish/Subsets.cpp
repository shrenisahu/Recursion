#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> super;

void SubsetFind(int i, vector<int> v, int size, vector<int> &subset)

{
    if (i == size)
    {
       
        super.push_back(subset);
        return;
    }
    SubsetFind(i + 1, v, size, subset);
    subset.push_back(v[i]);
    SubsetFind(i + 1, v, size, subset);
    subset.pop_back();
}

set<vector<int>> subsets(vector<int> &v)
{
    
    vector<int> subset{};

    int size = v.size();
    int temp = 0;
set<vector<int>>st;
    SubsetFind(temp, v, size, subset);
for (auto x : super)
    {
       
       
            st.insert(x);
        
       
    }
    return st;
}

int main()
{

    vector<int> v{1, 2, 3};
set<vector<int>>st=subsets(v);





for(auto k:st){
cout<<"[";
    for(auto j:k){
        cout<<j<<" ";
    }
    cout<<"]";
    cout<<endl;

}










   

    return 0;
}