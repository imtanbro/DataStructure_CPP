#include<bits/stdc++.h>
using namespace std;
int cnt[100005][32];
vector<int> AND_Queries (vector<int> Arr, vector<int> Val, vector<int> L, int N, int Q, vector<int> R) {
   for(int i=0;i<Q;i++)
    {
        int l=L[i],r=R[i],v=Val[i];
        cout<<"l is: "<<l<<endl;
        cout<<"r is: "<<r<<endl;
        cout<<"v is: "<<v<<endl;
        for(int j=0;j<30;j++)
        {
            cout<<(v & (1<<j))<<endl;
            if(! (v&(1<<j)))
            {
                cout<<"value of (v&(1<<j) is "<<(v & (1<<j))<<" and value of !(v & (1<<j)) is "<<(!(v & (1<<j)))<<endl;
                cout<<"b4 cnt[l-1][j] is: "<<cnt[l-1][j]<<endl;
                cnt[l-1][j]++;
                cout<<"after cnt"<<(l-1)<<(j)<<" is: "<<cnt[l-1][j]++<<endl;
                cout<<"b4 cnt[r][j] is: "<<cnt[r][j]<<endl;
                cnt[r][j]--;
                cout<<"after cnt"<<(r)<<(j)<<" is: "<<cnt[r][j]--<<endl;
            }
        }
    }
    for(int i=0;i<Arr.size();i++)
    {
        int num=0;
        for(int j=0;j<30;j++)
        {
            if(i){
                cout<<"cnt[i][j] is: cnt"<<i<<" "<<j<<" "<<cnt[i][j]<<endl;
                cout<<"cnt[i-1][j] is: cnt"<<(i-1)<<" "<<j<<" "<<cnt[i-1][j]<<endl;
                cnt[i][j]+=cnt[i-1][j];
                cout<<"New cnt[i][j] is: cnt"<<i<<" "<<j<<" "<<cnt[i][j]<<endl;
                }
            if(cnt[i][j]){
                cout<<"True cnt[i][j] is: cnt"<<i<<" "<<j<<" "<<cnt[i][j]<<endl;
            }
            else
            {
                cout<<"Inside Else"<<endl;
                if(Arr[i]&(1<<j)){
                    num|=1<<j;
                    cout<<"num|=1<<j is:"<<num<<" |= "<<(1 << j)<<" "<<(num|=1<<j)<<endl;
                    }
            }
        }
        Arr[i]=num;
    }
    return Arr;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int Q;
    cin >> Q;
    vector<int> Arr(N);
    for(int i_Arr=0; i_Arr<N; i_Arr++)
    {
    	cin >> Arr[i_Arr];
    }
    vector<int> L(Q),R(Q),Val(Q);
    for(int i_L=0; i_L<Q; i_L++)
    {
    	cin >> L[i_L] >> R[i_L] >> Val[i_L];
    }
    
    vector<int> out_;
    out_ = AND_Queries(Arr, Val, L, N, Q, R);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}