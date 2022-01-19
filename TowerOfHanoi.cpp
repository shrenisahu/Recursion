#include<bits/stdc++.h>
using namespace std;

void  TOH(int n,int S,int D,int H,int &count){
    count++;
if(n==1){
    cout<<"move plate"<< n<<"from "<<S <<"to"<< D<<endl;
    return;
}
TOH(n-1,S,H,D,count);

  cout<<"move plate"<< n<<"from "<<S <<"to"<< D<<endl;
TOH(n-1,H,D,S,count);
}

int main(){

int count=0;
int S=1;
int D=3;
int H=2;
//sourse //helper //des
    TOH(4,S,D,H,count);
    cout<<"number of steps"<<count<<"   ";
}
