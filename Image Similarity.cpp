Image Similarity 

#include<bits/stdc++.h>

using namespace std;

#define debug(x) cout << '[' << #x << " is: " << x << "] " << endl;

#define fastio ios_base::sync_with_stdio(false);cin.tie(0);

#define ll long long
#define int ll

const int N = 3e5 + 5  ,  M = N * 4 ;
ll oo = 1e18 ;


int32_t main()
{
    fastio;


    int t ;
    cin >> t ;



    while(t--){

        int n , m ;cin >> n >>m ;
        vector<pair<int , int > > v1 , v2;


        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ;j < m ; j++){
                char a;
                cin>> a;

                if(a == '#')v1.push_back({i , j});
            }
        }

        int n2, m2 ;
        cin >> n2 >> m2 ;


        for(int i =0  ; i < n2 ; i ++){

            for(int j = 0 ; j < m2 ; j ++){

                char a ;
                cin >> a ;

                if(a == '#')v2.push_back({i , j});
            }
        }

        int mx = 0 ;

        for(int i = 0 ; i < v1.size() ; i ++){



            for(int j = 0 ; j < v2.size() ; j ++){

               // if(v1[i] != {3 , 4} || v2[j] !=)
                map<pair<int , int > , int > mp , mp2 ;


                for(auto f : v1)mp[{v1[i].first - f.first , v1[i].second - f.second}] ++ ;


                int ans = 0;
                for(auto f : v2)mp2[{v2[j].first - f.first , v2[j].second - f.second}] ++ ;


                for(auto f : mp2)ans += min(f.second , mp[f.first]);
                mx = max(mx , ans);
                ans = 0 ;
                mp2.clear();




                 for(auto f : v2)mp2[{-(v2[j].first - f.first) , -(v2[j].second - f.second)}] ++ ;


                for(auto f : mp2)ans += min(f.second , mp[f.first]);
                mx = max(mx , ans);
                ans = 0 ;
                mp2.clear();



                 for(auto f : v2)mp2[{-(v2[j].first - f.first) , v2[j].second - f.second}] ++ ;


                for(auto f : mp2)ans += min(f.second , mp[f.first]);
                mx = max(mx , ans);
                ans = 0 ;
                mp2.clear();


                 for(auto f : v2)mp2[{v2[j].first - f.first , -(v2[j].second - f.second)}] ++ ;


                for(auto f : mp2)ans += min(f.second , mp[f.first]);
                mx = max(mx , ans);
                ans = 0 ;
                mp2.clear();



                for(auto f : v2)mp2[{v2[j].second - f.second , v2[j].first - f.first}] ++ ;


                for(auto f : mp2)ans += min(f.second , mp[f.first]);
                mx = max(mx , ans);
                ans = 0 ;
                mp2.clear();



                 for(auto f : v2)mp2[{  -(v2[j].second - f.second) , -(v2[j].first - f.first)}] ++ ;


                for(auto f : mp2)ans += min(f.second , mp[f.first]);
                mx = max(mx , ans);
                ans = 0 ;
                mp2.clear();



                 for(auto f : v2)mp2[{ v2[j].second - f.second , -(v2[j].first - f.first) }] ++ ;


                for(auto f : mp2)ans += min(f.second , mp[f.first]);
                mx = max(mx , ans);
                ans = 0 ;
                mp2.clear();


                 for(auto f : v2)mp2[{ -(v2[j].second - f.second) , v2[j].first - f.first }] ++ ;


                for(auto f : mp2)ans += min(f.second , mp[f.first]);
                mx = max(mx , ans);
                ans = 0 ;
                mp2.clear();




            }

        }
        cout <<mx << '\n';
    }



}
