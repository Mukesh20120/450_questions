#include <iostream>
#include <vector>
using namespace std;

void display(int r,int i,vector<vector<string>>&s,string str){
    if(r==s.size()){
        cout<<str<<endl;
        return;
    }
    for(int k=0;k<s[r].size();k++){
        display(r+1,k,s,str+s[r][k]+" ");
    }
}


void sentance(vector<vector<string>>&s){
   display(0,0,s,"");
}

int main(){
    vector<vector<string>>s;
    s={{"you","we"},{"have","are"},{"eating","sleeping","dancing"}};
    sentance(s);
    return 0;
}