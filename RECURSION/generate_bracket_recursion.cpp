#include <iostream>
using namespace std;
void generate_bracket_recursion(char* out,int n,int idx ,int open,int close){
if(idx==2*n){
    out[idx]='\0';
     cout<<out<<endl;
     return;
}
//open
if(open<n){
    out[idx]='(';
    generate_bracket_recursion(out,n,idx+1,open+1,close);

}
//close
if(close<open){
    out[idx]=')';
    generate_bracket_recursion(out,n,idx+1,open,close+1);

}
}
int main(){
    int n=3;
    char out[100];
    generate_bracket_recursion(out,n,0,0,0);
}