#include<bits/stdc++.h>
using namespace std;

 void Subset(string input,string output){


if(input.size()==0){
    cout<<"["<<output<<"] ";
    return;
}




string output1=output;
string output2=output;

output2.push_back(input[0]);

input.erase(input.begin()+0);

Subset(input,output1);
Subset(input,output2);


 }

int main(){

string s="abc";

string output=" ";
Subset(s,output);
    return 0;
}
