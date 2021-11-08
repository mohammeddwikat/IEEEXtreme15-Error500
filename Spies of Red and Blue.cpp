#include <bits/stdc++.h>

using namespace std;
#define REP(i,l,r) for(int i=(l);i<(r);i++)
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,r,b,q,x,z,red,blue;
    cin>>t;
    REP(i,0,t){
        cin>>r>>b>>q;
        vector<int>v(r+b);
        v[r]=r;
        string s,ss;
        REP(j,1,r){
            cin>>s;
            v[j]=stoi(s.substr(1))-1;
        }
        REP(j,1,b){
            cin>>s;
            v[j+r]=r+stoi(s.substr(1))-1;
        }
        char c;
        REP(j,0,q){
            cin>>c;
            cin>>s>>ss;
            x=stoi(s.substr(1))-1;
            z=stoi(ss.substr(1))-1;
            if(s[0]=='B'){
                x+=r;
            }
            if(ss[0]=='B'){
                z+=r;
            }
            if(c=='c'){
                v[x]=z;
                continue;
            }
            vector<bool>vis(r+b),vis1(r+b);
            int node=x,p1=0,p2=0;
            while(true){
                if(vis[node]){
                    p1=10000;
                    break;
                }
                if(v[node]==node){
                    break;
                }
                p1++;
                vis[node]=true;
                node=v[node];
            }
            red=10000;
            blue=10000;
            if(node<r){
                red=min(red,p1);
            }
            else{
                blue=min(blue,p1);
            }
            node=z;
            while(true){
                if(vis1[node]){
                    p2=10000;
                    break;
                }
                if(v[node]==node){
                    break;
                }
                p2++;
                vis1[node]=true;
                node=v[node];
            }
            if(node<r){
                red=min(red,p2);
            }
            else{
                blue=min(blue,p2);
            }
            if(red<blue){
                cout<<"RED "<<red<<endl;
                continue;
            }
            if(blue<red){
                cout<<"BLUE "<<blue<<endl;
                continue;
            }
            if(red==blue&&red!=10000){
                cout<<"TIE "<<red<<endl;
                continue;
            }
            cout<<"NONE"<<endl;
        }
    }
    return 0;
}
