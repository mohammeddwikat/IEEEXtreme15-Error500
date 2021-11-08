#includebitsstdc++.h

using namespace std;

#define debug(x) cout  '['  #x   is   x  ]   endl;

#define fastio ios_basesync_with_stdio(false);cin.tie(0);

#define ll long long
#define int ll

const int N = 2e5 + 3  ,  M = N  4 ;
const ll MOD = 1e9+ 7 , oo = 1e9 + 9 , OO = 1e18 , mod = MOD ;
const double pi = acos(-1) , eps = 1e-17 ;

int di[] = {0 , 0 , 1 , -1};
int dj[] = {1 , -1 , 0 , 0};





int32_t main()
{   inF;
    inF;outF;
    fastio;

    int t ;
    cin  t ;


    while(t--){
        int n ;
        cin  n;
        int l[n + 1] , r[n + 1];

        vectorint L [n + 1];
        for(int i = 1 ; i = n ;i ++){
            cin  l[i]  r[i];
            L[l[i]].push_back(i);
        }

        int ans[n + 1] = {};
        mapint , int  mp;
        priority_queuepairint , int  , vectorpairint , int   , greaterpairint , int    st ;

        int no = 0;
        for(int i = 1; i = n ; i ++){
            int mn = oo ,a;

            for(auto f  L[i]){
                st.push({r[f] , f});
                for(auto f st)cout  f.pat       f.en 'n';
            }

            if(st.empty()){
                no++;
                break;
            }

            
            ans[i] = st.top().second ;
            st.pop();
            
            while(st.size() && r[st.top().second] == i)st.pop();

        }
        if(no)cout  impossible;
        else for(int i = 1 ; i = n ; i ++)cout  ans[i]    ;
        cout  'n';
    }

}
