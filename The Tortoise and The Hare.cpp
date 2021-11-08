#include<bits/stdc++.h>

using namespace std;

#define debug(x) cout << '[' << #x << " is: " << x << "] " << endl;

#define fastio ios_base::sync_with_stdio(false);cin.tie(0);

#define ll long long
#define int ll

const int N = 1e3+ 3  ,  M = N * 4 ;
const ll MOD = 1e9+ 7 , oo = 1e9 + 9 , OO = 1e18 , mod = MOD ;
const double pi = acos(-1) , eps = 1e-17 ;

int di[] = {0 , 0 , 1 , -1};
int dj[] = {1 , -1 , 0 , 0};


vector<pair<int , int > > adj[N];
int dis[N] ;

int n ;

ll dijkstra(int s , int e , int mmn){

    for(int i = 1; i <= n ; i++)dis[i] = OO;

    priority_queue<pair<int , int > , vector<pair<int, int>  > , greater<pair<int , int > > > pq ;


    pq.push({0 , s});


    while(pq.size()){

        auto tp = pq.top();
        pq.pop();


        for(auto f : adj[tp.second]){

            if(f.first == mmn)continue ;

            ll nc = f.second + tp.first ;

            if(nc < dis[f.first])dis[f.first] = nc, pq.push({nc , f.first});

        }

    }
    if(dis[e] == OO)return 0 ;

    return dis[e];
}
int32_t main()
{   
    fastio;
    ll  m , s , t ;
    cin >> n >>m >> s>> t ;
    while(m--){
        ll a , b , c ;
        cin >> a >> b >> c ;
        adj[a].push_back({b , c});
        adj[b].push_back({a , c});
    }
    ll mx = 0;
    ll ans ;
    for(int i = 1 ; i <= n; i ++){
        if(i == s || i == t)continue ;
        ll d = dijkstra(s , t , i);
       if(d > mx)mx = d , ans = i ;
    }
    cout << ans;

}
