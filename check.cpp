#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        int c1=0;
        //int c2=0;
        if(b>d){
            cout<<-1<<endl;
        }
        else{
            while(b!=d){
                c1++;
                a++;
                b++;
            }
            if(a<c){
                cout<<-1<<endl;
            }
            else{
                while(a!=c){
                    c1++;
                    a--;
                }
                cout<<c1<<endl;
            }
        }

    }
}